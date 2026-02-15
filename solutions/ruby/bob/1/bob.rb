module Bob
  def self.hey(remark)
    letters = remark.scan(/[A-Za-z]/)
    yell = letters.any? && letters.all? { |c| c =~ /[A-Z]/ }
    question = remark.strip.end_with?("?")
    silence  = remark.strip.empty?

    return "Fine. Be that way!" if silence
    return "Calm down, I know what I'm doing!" if yell && question
    return "Whoa, chill out!" if yell
    return "Sure." if question

    "Whatever."
  end
end