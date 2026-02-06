module PhoneNumber
  def self.clean(input)
    digits = input.scan(/\d/)

    if digits.length == 11
      return nil unless digits.first == "1"
      digits.shift
    end

    return nil unless digits.length == 10

    return nil if digits[0] < "2"
    return nil if digits[3] < "2"

    digits.join
  end
end
