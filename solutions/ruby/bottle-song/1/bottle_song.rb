class BottleSong
  NUMBERS = %w[no one two three four five six seven eight nine ten]

  def self.recite(start, verses)
    start.downto(start - verses + 1).map { |n| verse(n) }.join("\n")
  end

  def self.bottle_word(n)
    n == 1 ? "bottle" : "bottles"
  end

  def self.verse(n)
    next_n = n - 1

    <<~TEXT
      #{NUMBERS[n].capitalize} green #{bottle_word(n)} hanging on the wall,
      #{NUMBERS[n].capitalize} green #{bottle_word(n)} hanging on the wall,
      And if one green bottle should accidentally fall,
      There'll be #{NUMBERS[next_n]} green #{bottle_word(next_n)} hanging on the wall.
    TEXT
  end
end
