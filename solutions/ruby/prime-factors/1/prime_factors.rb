module PrimeFactors
  def self.of(n)
    factor = []
    div = 2
  
    while n > 1
      while n % div == 0
        factor << div
        n /= div
      end
      div += 1
    end
    
    factor
  end
end