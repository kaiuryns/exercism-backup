class Series
  def initialize(product)
    @product = product
    @size = product.length
    @value = 0
    @letter = product.scan(/\D/)
  end

  def largest_product(size)
    raise ArgumentError if @size < size || @product.empty? || 
                          size.negative? || @letter.any?
    @size.times do |i|
      break if i + size > @size
      tmp = 1
      @product[i..(i + size - 1)].each_char { |c| tmp *= c.to_i }
      @value = tmp if @value < tmp
    end
    @value
  end
end