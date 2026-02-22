module Tournament
  FORMATO = "%-30s | %2s | %2s | %2s | %2s | %2s"
  
  def self.tally(input)
    teams = Hash.new { |h, n| h[n] = { mp: 0, w: 0, d: 0, l: 0, p: 0 } }

    input.each_line do |line|
      team_a, team_b, result = line.strip.split(';')

      case result
      when 'win'
        update(teams[team_a], :w)
        update(teams[team_b], :l)
      when 'loss'
        update(teams[team_a], :l)
        update(teams[team_b], :w)
      when 'draw'
        update(teams[team_a], :d)
        update(teams[team_b], :d)
      end
    end

    sorted_teams = teams.sort_by { |name, stats| [-stats[:p], name] }

    header = sprintf(FORMATO, "Team", "MP", "W", "D", "L", "P")
    rows = sorted_teams.map do |name, s|
      sprintf(FORMATO, name, *s.values)
    end

    ([header] + rows).join("\n") << "\n"
  end

  def self.update(team, outcome)
    team[:mp] += 1
    team[outcome] += 1
    
    case outcome
    when :w then team[:p] += 3
    when :d then team[:p] += 1
    end
  end
end