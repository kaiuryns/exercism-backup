class BaseConverter
  def self.convert(base, values, out)
    raise ArgumentError if base < 2 || out < 2

    decimal = 0
    values.reverse.each_with_index do |n, i|
      raise ArgumentError if n < 0 || n >= base
      decimal += n * (base**i)
    end

    return [0] if decimal == 0

    final = []
    while decimal > 0
      final.unshift(decimal % out)
      decimal /= out
    end
    final
  end
end
