class BinarySearch
  def initialize(values)
    @values = values
  end

  def search_for(n)
    left = 0
    right = @values.length

    while left < right
      mid = left + (right - left) / 2

      return mid if @values[mid] == n

      if @values[mid] < n 
        left = mid + 1
      else
        right = mid
      end
    end
    nil
  end
end