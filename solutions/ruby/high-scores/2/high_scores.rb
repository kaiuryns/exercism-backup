class HighScores
  def initialize(score)
    @score = score
  end

  def scores
    @score
  end
  
  def latest
    @score.last
  end

  def personal_best()
    @score.max { |a, b| a <=> b }
  end

  def personal_top_three
    @score.max(3) { |a, b| a <=> b }
  end

  def latest_is_personal_best?
    latest == personal_best
  end
end