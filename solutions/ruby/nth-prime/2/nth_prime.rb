module Prime
  def self.nth(n)
    raise ArgumentError if n < 1

    count = 0
    candidate = 1

    while count < n
      candidate += 1
      count += 1 if is_prime(candidate)
    end

    candidate
  end

  def self.is_prime(n)
    limit = Math.sqrt(n).to_i
    (2..limit).each do |i|
      return false if n % i == 0
    end
  end
end
