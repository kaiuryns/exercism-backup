module Transpose
  def self.transpose(input)

    input.gsub!(" ", "*")
    words = input.split("\n")
    return "" if words.empty?

    rows = words.map(&:length).max
    cols = words.length

    new = ""
    for i in 0...rows
      for j in 0...cols
        new << (words[j][i] || " ")
      end
      new.rstrip!
      new << "\n" if i != rows - 1
    end
    new.gsub("*", " ")
  end
end
      