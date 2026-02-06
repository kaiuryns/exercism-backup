class DndCharacter
  attr_reader :strength, :dexterity, :constitution, :intelligence, :wisdom, :charisma, :hitpoints
  
  def self.modifier(score)
    ((score - 10) / 2).floor
  end

  def initialize
    @strength = ability
    @dexterity = ability
    @constitution = ability
    @intelligence = ability
    @wisdom = ability
    @charisma = ability
    @hitpoints = 10 + DndCharacter.modifier(@constitution)
  end

  def ability
    Array.new(4) { rand(1..6) }
      .sort
      .last(3)
      .sum
  end
end