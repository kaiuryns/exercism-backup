class Darts
  POINTS = {
    outside: 0,
    outer: 1,
    middle: 5,
    inner: 10
  }

  DISTANCE = {
    outer: 100,
    middle: 25,
    inner: 1
  }
  
  attr_reader :score

  def initialize(x, y)
    distance = x**2 + y**2

    @score = if distance <= DISTANCE[:inner]
      POINTS[:inner]
    elsif distance <= DISTANCE[:middle]
      POINTS[:middle]
    elsif distance <= DISTANCE[:outer]
      POINTS[:outer]
    else
      POINTS[:outside]
    end
  end
end
    

    