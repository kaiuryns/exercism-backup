class Queens
  def initialize(white: [0, 0], black: [0, 0])
    (white + black).each { |p| raise ArgumentError if p < 0 || p > 7 }

    @attack = [0, 1].any? { |p| white[p] == black[p] }
    @attack = true if (white[0] - black[0]).abs == (white[1] - black[1]).abs
  end

  def attack?
    @attack
  end
end
    