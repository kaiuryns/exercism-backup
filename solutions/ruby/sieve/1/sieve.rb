class Sieve
  attr_reader :primes
  
  def initialize(n)
    return @primes = [] if n < 2

    numbers = (2..n).to_a

    @primes = numbers.select do |num|
      (2...num).all? { |div| num % div != 0 }
    end
  end
end
