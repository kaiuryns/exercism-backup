class Allergies
  ALLERGIES = {
    'eggs' => 1,
    'peanuts' => 2,
    'shellfish' => 4,
    'strawberries' => 8,
    'tomatoes' => 16,
    'chocolate' => 32,
    'pollen' => 64,
    'cats' => 128
  }
  
  def initialize(allergies)
    @allergies = allergies
  end

  def allergic_to?(allergie)
    (@allergies & ALLERGIES[allergie]) != 0
  end

  def list
    ALLERGIES.keys.select { |allergie| allergic_to?(allergie) }
  end
end
