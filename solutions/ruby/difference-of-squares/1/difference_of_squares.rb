class Squares
  def initialize(n)
    @square_of_sum = 0
    @sum_of_squares = 0
    
    for i in 1..n do
      @square_of_sum += i
      @sum_of_squares += i**2
    end
    
    @square_of_sum**=2
  end

  def difference
    square_of_sum - sum_of_squares
  end

  attr_reader :square_of_sum
  attr_reader :sum_of_squares
end