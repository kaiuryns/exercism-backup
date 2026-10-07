module Grid
  def self.saddle_points(input)
    columns = input.transpose
    result = []

    input.size.times do |r|
      columns.size.times do |c|
        result << { "row" => r + 1, "column" => c + 1 } if input[r].max == columns[c].min
      end
    end
    result
  end
end