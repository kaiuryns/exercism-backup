module Brackets
  PAIRS = { ')' => '(', ']' => '[', '}' => '{' }
  
  def self.paired?(input)
    input = input.scan(/[()\[\]{}]/).join
    stack = []

    input.each_char do |c|
      if PAIRS.values.include?(c)
        stack.push(c)
      elsif PAIRS.keys.include?(c)
        return false if stack.pop != PAIRS[c]
      end
    end
    stack.empty?
  end
end