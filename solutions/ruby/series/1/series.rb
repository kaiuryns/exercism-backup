class Series
  def initialize(number)
    if number.nil? || number.empty?
      raise ArgumentError, "ERROR"
    end
    @number = number
  end

  def slices(n)
    number_array = @number.chars

    if number_array.length < n || n < 1
      raise ArgumentError, "ERROR"
    end

    arr = []
    for i in 0..(number_array.length - n)
      arr << number_array[i, n].join
    end
    arr
  end
end