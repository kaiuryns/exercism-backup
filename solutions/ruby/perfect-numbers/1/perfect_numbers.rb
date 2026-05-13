module PerfectNumber
  def self.classify(n)
    raise ArgumentError, 'Classification is only possible for positive integers.' if n < 1
    sum = (1..Math.sqrt(n)).sum { |i| n % i == 0 ? (i == 1 || i*i == n ? i : i + n/i) : 0 }
    n > 1 && sum == n ? 'perfect' : (sum > n ? 'abundant' : 'deficient')
  end
end
