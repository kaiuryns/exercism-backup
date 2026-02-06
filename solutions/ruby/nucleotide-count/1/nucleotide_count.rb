class Nucleotide
  def initialize(histogram)
    @histogram = histogram
  end

  def self.from_dna(str)
    counts = {
      "A" => 0,
      "C" => 0,
      "G" => 0,
      "T" => 0
    }

    str.each_char do |c|
      raise ArgumentError, "Invalid nucleotide" unless counts.key?(c)
      counts[c] += 1
    end

    new(counts)
  end

  attr_reader :histogram
end
