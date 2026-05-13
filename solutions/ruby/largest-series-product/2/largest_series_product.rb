class Series
  def initialize(numbers)
    @numbers = numbers
  end

  def largest_product(size)
    raise ArgumentError if size > @numbers.size || @numbers.scan(/\D/).any?
    @numbers.chars.map(&:to_i).each_cons(size).map { |n| n.inject(:*) }.max
  end
end