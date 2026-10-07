module Grid
  def self.saddle_points(input)
    tupni = input.transpose
    result = []

    input.size.times do |r|
      tupni.size.times do |c|
        result << { "row" => r + 1, "column" => c + 1 } if input[r].max == tupni[c].min
      end
    end
    result
  end
end