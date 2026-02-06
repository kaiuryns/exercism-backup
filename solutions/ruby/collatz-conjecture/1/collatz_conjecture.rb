module CollatzConjecture
  def self.steps(n)
    raise ArgumentError if n <= 0
    
    i = 0
    
    while n != 1
      if n % 2 == 0
        n /= 2
      else
        n = n * 3 + 1
      end
      i += 1
    end
    
    i
  end
end