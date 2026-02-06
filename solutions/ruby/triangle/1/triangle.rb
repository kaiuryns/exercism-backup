class Triangle
  def initialize triangle
    @triangle = triangle
  end

  def valid?
    @triangle.sort.then { |x, y, z| x + y >= z } && @triangle.all?(&:positive?)
  end

  def equilateral?
     valid? && @triangle.uniq.size == 1
  end

  def isosceles?
    valid? && @triangle.uniq.size <= 2
  end

  def scalene?
    valid? && @triangle.uniq.size == 3
  end
end
  