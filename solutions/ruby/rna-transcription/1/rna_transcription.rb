module Complement
  def self.of_dna(dna)
    dna.chars.map { |c| 
    case c
      when 'C' then 'G'
      when 'G' then 'C'
      when 'T' then 'A'
      when 'A' then 'U'
    end
    }.join
  end
end