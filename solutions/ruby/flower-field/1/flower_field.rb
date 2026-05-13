class FlowerField
  def self.annotate(input)
    return [] if input.empty?
    
    rows = input.length
    cols = input[0].length

    rows.times do |r|
      cols.times do |c|
        next unless input[r][c] == ' '

        flowers = 0
        (-1..1).each do |dr|
          (-1..1).each do |dc|
            next if dr == 0 && dc == 0
            
            nr = r + dr
            nc = c + dc
            
            if nr >= 0 && nr < rows && nc >= 0 && nc < cols
              flowers += 1 if input[nr][nc] == '*'
            end
          end
        end

        input[r][c] = flowers.to_s if flowers > 0
      end
    end
    input
  end
end
