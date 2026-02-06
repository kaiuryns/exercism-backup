module Pangram
  def self.pangram?(sentence)
    counts = Hash.new(0)

    sentence
      .downcase
      .chars
      .map { |c| counts[c] += 1 if c >= 'a' && c <= 'z' }

    counts.keys.size == 26
  end
end