class RunLengthEncoding
  def self.encode(code)
    return "" if code.empty?
    letter = code[0]
    number = 0
    index = 0
    final = []

    while index < code.length
      if letter == code[index]
        number += 1
      else
        final << (number > 1 ? "#{number}#{letter}" : letter)
        
        letter = code[index]
        number = 1
      end
      index += 1
    end

    final << (number > 1 ? "#{number}#{letter}" : letter)
    final.join
  end

  def self.decode(code)
    numbers = ""
    result = ""
    
    code.each_char do |c|
      if c =~ /\d/
        numbers << c
      else
        count = numbers.empty? ? 1 : numbers.to_i
        result << (c * count)
        numbers = ""
      end
    end
    
    result
  end
end
