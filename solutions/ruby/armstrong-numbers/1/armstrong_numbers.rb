module ArmstrongNumbers
  def self.include?(number)
    numbers = number.digits
    power  = numbers.length

    numbers.sum { |n| n ** power } == number
  end
end
