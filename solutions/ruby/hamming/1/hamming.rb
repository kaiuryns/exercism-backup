module Hamming
  def self.compute(a, b)
    raise ArgumentError if a.length != b.length

    differences = 0
    for i in 0..a.length
      if a[i] != b[i]
        differences += 1
      end
    end
    differences
  end
end