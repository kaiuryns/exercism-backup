class Series
  def initialize(numbers)
    raise ArgumentError if numbers.nil? || numbers.empty?
    @numbers = numbers
  end

  def slices(n)
    raise ArgumentError if n < 1 || n > @numbers.length
    @numbers.chars.each_cons(n).map(&:join)
  end
end