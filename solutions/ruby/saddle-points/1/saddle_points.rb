module Grid
  def self.saddle_points(input)
    tupni = input.transpose
    result = []

    input.size.times do |r|
      tupni.size.times do |c|
        save(r, c, result) if input[r].max == tupni[c].min
      end
    end
    result
  end

  def self.save(r, c, result)
    result << { "row" => r + 1, "column" => c + 1 }
  end
end