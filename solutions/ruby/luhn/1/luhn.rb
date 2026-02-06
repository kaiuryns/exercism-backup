module Luhn
  def self.valid? n
    return false if n.scan(/[0-9]/).length <= 1 || n.downcase.scan(/[a-z#$%-]/).length > 0
    n = n.scan(/[0-9]/)
    i = n.length - 1
    sum = 0
    mod = false
    
    while i >= 0
      d = n[i].to_i
      if mod
        d *= 2
        d -= 9 if d > 9
      end
        
      sum += d
      i -= 1
      mod = !mod
    end
    
    sum % 10 == 0
  end
end