module Isogram
  def self.isogram?(input)
    @input = input.downcase.scan(/[a-z]/)
    hash = Hash.new(0)
    @input.each { |w| 
      hash[w] += 1
      if hash[w] > 1
        return false
      end
    }
    true
  end
end

