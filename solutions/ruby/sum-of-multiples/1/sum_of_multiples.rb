class SumOfMultiples
  def initialize(*numbers)
    @numbers = numbers
  end

  def to(n)
    sum = 0

    for level in 1...n
      for number in @numbers
        if number != 0 && level % number == 0
          sum += level
          break
        end
      end
    end

    sum
  end
end
