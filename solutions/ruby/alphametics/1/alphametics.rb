module Alphametics
  def self.solve(puzzle)
    left, right = puzzle.split("==")

    weights = Hash.new(0)
    left.scan(/[A-Z]+/).each  { |word| add_weights(weights, word, 1) }
    right.scan(/[A-Z]+/).each { |word| add_weights(weights, word, -1) }

    letters = weights.keys

    coefs = letters.map { |l| weights[l] }
    leading = puzzle.scan(/[A-Z]+/).map { |w| w[0] }.uniq
    leading_idx = leading.map { |l| letters.index(l) }

    (0..9).to_a.permutation(letters.size) do |digits|
      next if leading_idx.any? { |i| digits[i].zero? }

      total = 0
      digits.each_with_index { |d, i| total += d * coefs[i] }

      return letters.zip(digits).to_h if total.zero?
    end

    {}
  end

  def self.add_weights(weights, word, sign)
    word.reverse.each_char.with_index do |ch, i|
      weights[ch] += sign * 10**i
    end
  end
end