class Game
  class BowlingError < StandardError; end

  def initialize
    @rolls = []
  end
  
  def roll(pins)
    raise BowlingError unless pins.between?(0, 10)
    raise BowlingError if complete?
    
    @rolls << pins
    validate_current_roll!
  end

  def score
    raise BowlingError unless complete?
    total, idx = 0, 0
    10.times do
      if strike?(idx)
        total += 10 + @rolls[idx+1].to_i + @rolls[idx+2].to_i
        idx += 1
      elsif spare?(idx)
        total += 10 + @rolls[idx+2].to_i
        idx += 2
      else
        total += @rolls[idx].to_i + @rolls[idx+1].to_i
        idx += 2
      end
    end
    total
  end

  private

  def strike?(i) = @rolls[i] == 10
  def spare?(i)  = !strike?(i) && (@rolls[i].to_i + @rolls[i+1].to_i == 10)

  def tenth_idx = (1..9).reduce(0) { |i, _| i + (strike?(i) ? 1 : 2) }

  def validate_current_roll!
    idx = 0

    while idx < @rolls.size - 1 && idx < tenth_idx
      r1, r2 = @rolls[idx], @rolls[idx+1]
      raise BowlingError if r1 < 10 && r2 && (r1 + r2 > 10)
      idx += (r1 == 10 ? 1 : 2)
    end

    r1, r2, r3 = @rolls[idx..]
    raise BowlingError if r1.to_i < 10 && r2 && (r1 + r2 > 10)
    raise BowlingError if idx >= tenth_idx && r1 == 10 && r2.to_i < 10 && r3 && (r2 + r3 > 10)
  end

  def complete?
    idx = tenth_idx
    tenth = @rolls[idx..] || []
    return false if tenth.size < 2
    (tenth[0] == 10 || tenth[0] + tenth[1].to_i == 10) ? tenth.size == 3 : tenth.size == 2
  end
end
