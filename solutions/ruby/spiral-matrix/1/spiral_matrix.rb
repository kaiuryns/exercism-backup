class SpiralMatrix
  attr_reader :matrix
  
  def initialize(n)
    return @matrix = [] if n < 1
    @matrix = Array.new(n) { Array.new(n, 0) }

    top, bottom = 0, n - 1
    left, right = 0, n - 1
    value = 1

    while value <= n * n
      (left..right).each { |i| @matrix[top][i] = value; value += 1 }
      top += 1

      (top..bottom).each { |i| @matrix[i][right] = value; value += 1 }
      right -= 1

      if top <= bottom
        right.downto(left).each { |i| @matrix[bottom][i] = value; value += 1 }
        bottom -= 1
      end

      if left <= right
        bottom.downto(top).each { |i| @matrix[i][left] = value; value += 1 }
        left += 1
      end
    end
  end
end