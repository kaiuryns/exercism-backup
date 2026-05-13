class WordProblem
  attr_reader :answer

  NUMBER = /\A-?\d+\z/
  
  def initialize(str)
    parser = str.chomp('?').split(' ')
    @answer = 0
    i = 2
    numbers = []
    operations = []
    
    while i < parser.size
      case parser[i]
      when NUMBER
        error if parser[i + 1] =~ NUMBER
        numbers << parser[i].to_i
        i += 1
      when 'plus', 'minus'
        error unless parser[i - 1] =~ NUMBER && parser[i + 1] =~ NUMBER
        operations << parser[i]
        i += 1
      when 'multiplied', 'divided'
        error unless parser[i - 1] =~ NUMBER && parser[i + 2] =~ NUMBER
        operations << parser[i]
        i += 2
      else
        error
      end
    end
    error if numbers.empty?
    
    @answer = numbers[0]
    operations.each_with_index do |op, i|
      @answer = case op
      when 'plus' then @answer + numbers [i + 1]
      when 'minus' then @answer - numbers [i + 1]
      when 'multiplied' then @answer * numbers [i + 1]
      when 'divided' then @answer / numbers [i + 1]
      end
    end
  end

  def error
    raise ArgumentError
  end
end