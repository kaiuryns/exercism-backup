module PythagoreanTriplet
  def self.triplets_with_sum(sum)
    triplets = []

    m = 2
    while 2 * m * (m + 1) <= sum
      (1...m).each do |n|
        next if (m - n).even?
        next unless m.gcd(n) == 1

        base_sum = 2 * m * (m + n)
        next unless sum % base_sum == 0

        k = sum / base_sum

        a = k * (m * m - n * n)
        b = k * (2 * m * n)
        c = k * (m * m + n * n)

        triplets << [a, b, c].sort
      end
      m += 1
    end

    triplets.sort
  end
end
