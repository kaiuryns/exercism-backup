=begin
Write your code for the 'High Scores' exercise in this file. Make the tests in
`high_scores_test.rb` pass.

To get started with TDD, see the `README.md` file in your
`ruby/high-scores` directory.
=end
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

  def personal_best
    @score.max { |a, b| a <=> b }
  end

  def personal_top_three
    @score.max(3) { |a, b| a <=> b }
  end

  def latest_is_personal_best?
    latest == personal_best
  end
end