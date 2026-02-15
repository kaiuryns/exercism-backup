class Anagram
  def initialize(word)
    @word = word.downcase
    @sorted = @word.chars.sort
  end

  def match(words)
    words.select do |w|
      word = w.downcase
      word != @word && word.chars.sort == @sorted
    end
  end
end
