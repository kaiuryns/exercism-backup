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
    @score.max
  end

  def personal_top_three
    @score.max(3)
  end

  def latest_is_personal_best?
    latest == personal_best
  end
end