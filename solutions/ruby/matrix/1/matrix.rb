=begin
Write your code for the 'Matrix' exercise in this file. Make the tests in
`matrix_test.rb` pass.

To get started with TDD, see the `README.md` file in your
`ruby/matrix` directory.
=end
class Matrix
  attr_reader :matrix
  
  def initialize(matrix)
    @matrix = matrix.split("\n").map {|n| n.split.map(&:to_i)}
  end
  
  def row(n)
    matrix[n - 1]
  end

  def column(n)
    matrix.map {|row| row[n - 1]}
  end
end