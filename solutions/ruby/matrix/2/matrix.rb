class Matrix
  attr_reader :matrix
  
  def initialize(matrix)
    @matrix = matrix.split("\n").map {|row| row.split.map(&:to_i)}
  end
  
  def row(n)
    matrix[n - 1]
  end

  def column(n)
    matrix.map {|row| row[n - 1]}
  end
end