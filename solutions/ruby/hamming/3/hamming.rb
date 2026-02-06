module Hamming
  def self.compute(a, b)
    raise ArgumentError if a.length != b.length

    len = a.length
    diff = 0
    i = 0

    while i < len
      diff += 1 if a.getbyte(i) != b.getbyte(i)
      i += 1
    end

    diff
  end
end