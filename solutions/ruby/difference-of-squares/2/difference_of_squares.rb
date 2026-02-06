class Squares
  def initialize(n)
    @square_of_sum = (n * (n + 1) / 2)**2
    @sum_of_squares = n * (n + 1) * (2 * n + 1) / 6
  end

  def difference
    square_of_sum - sum_of_squares
  end

  attr_reader :square_of_sum
  attr_reader :sum_of_squares
end