class Scrabble
  def initialize(word)
    word = word.to_s.downcase
    @points = word.chars.each.sum do |c|
      case c
      when 'a', 'e', 'i', 'o', 'u', 'l', 'n', 'r', 's', 't'; 1
      when 'd', 'g'; 2
      when 'b', 'c', 'm', 'p'; 3
      when 'f', 'h', 'v', 'w', 'y'; 4
      when 'k'; 5
      when 'j', 'x'; 8
      when 'q', 'z'; 10
      end
    end
  end

  def score
    @points
  end
end