class Robot
  attr_reader :coordinates, :bearing
  DIRECTIONS = [:north, :east, :south, :west]
  
  def initialize
    @coordinates = [0, 0]
    @bearing = :north
  end

  def orient(direction)
    direction = direction.to_sym
    raise ArgumentError unless DIRECTIONS.include?(direction)
    @bearing = direction
  end

  def turn_right
    index = DIRECTIONS.index(@bearing)
    @bearing = DIRECTIONS[(index + 1) % DIRECTIONS.size]
  end

  def turn_left
    index = DIRECTIONS.index(@bearing)
    @bearing = DIRECTIONS[(index - 1) % DIRECTIONS.size]
  end

  def at(n1, n2)
    @coordinates[0] = n1
    @coordinates[1] = n2
  end

  def advance
    x, y = @coordinates
    case @bearing
    when :north
      @coordinates = [x, y + 1]
    when :east
      @coordinates = [x + 1, y]
    when :south
      @coordinates = [x, y - 1]
    when :west
      @coordinates = [x - 1, y]
    end
  end
end

class Simulator
  MAP = {
    'L' => :turn_left,
    'R' => :turn_right,
    'A' => :advance
  }
  def instructions(i)
    i.each_char.map { |i| MAP[i] }
  end

  def place(robot, x:, y:, direction:)
    robot.at(x, y)
    robot.orient(direction)
  end

  def evaluate(robot, i)
    funcs = instructions(i)
    funcs.map { |m| robot.send(m) }
  end
end
    
  
    
    