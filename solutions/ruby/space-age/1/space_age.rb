class SpaceAge
  attr_reader :age

  EARTH_YEAR = 31_557_600.0

  ORBITAL_PERIODS = {
    mercury: 0.2408467,
    venus: 0.61519726,
    earth: 1.0,
    mars: 1.8808158,
    jupiter: 11.862615,
    saturn: 29.447498,
    uranus: 84.016846,
    neptune: 164.79132
  }

  def initialize(age)
    @age = age
  end

  def on_earth
    age / EARTH_YEAR
  end

  def on_mercury
    on_earth / ORBITAL_PERIODS[:mercury]
  end

  def on_venus
    on_earth / ORBITAL_PERIODS[:venus]
  end

  def on_mars
    on_earth / ORBITAL_PERIODS[:mars]
  end

  def on_jupiter
    on_earth / ORBITAL_PERIODS[:jupiter]
  end

  def on_saturn
    on_earth / ORBITAL_PERIODS[:saturn]
  end

  def on_uranus
    on_earth / ORBITAL_PERIODS[:uranus]
  end

  def on_neptune
    on_earth / ORBITAL_PERIODS[:neptune]
  end
end