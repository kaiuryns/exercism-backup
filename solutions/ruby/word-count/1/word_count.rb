class Phrase
  def initialize(word)
    @word = word.downcase.scan(/[a-z0-9]+(?:'[a-z0-9]+)*/)
  end

  def word_count
    count = Hash.new(0)
    @word.each { |w| count[w] += 1}
    count
  end
end

  