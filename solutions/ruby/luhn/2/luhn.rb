module Luhn
  def self.valid?(n)
    digits = n.delete(" ")

    return false unless digits.match?(/\A\d{2,}\z/)

    result = 
      digits
      .chars
      .reverse
      .map(&:to_i)
      .each_with_index
      .sum { |d, i|
        if i.odd?
          d = d * 2
          d -= 9 if d > 9
        end
        d
      }

    result % 10 == 0
  end
end