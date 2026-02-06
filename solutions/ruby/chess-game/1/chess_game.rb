module Chess
  RANKS = 1..8
  FILES = 'A'..'H'

  def self.valid_square?(rank, file)
    !RANKS.include?(rank) || !FILES.include?(file) ? false : true
  end

  def self.nickname(first_name, last_name)
    (first_name[0..1] + last_name[-2..-1]).upcase
  end

  def self.move_message(first_name, last_name, square)
    if valid_square?(square[1].to_i, square[0])
      "%s moved to %s" % [nickname(first_name, last_name), square]
    else
      "%s attempted to move to %s, but that is not a valid square" % [nickname(first_name, last_name), square]
    end
  end
end
