module Grains
  def self.square(n)
    raise ArgumentError if n < 1 || n > 64

    2**(n - 1)
  end

  def self.total
    square(64) * 2 - 1
  end
end