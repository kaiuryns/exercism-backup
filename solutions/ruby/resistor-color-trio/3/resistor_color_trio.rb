class ResistorColorTrio
  COLORS = %w[black brown red orange yellow green blue violet grey white]

    UNITS = {
    1_000_000_000 => "gigaohms",
    1_000_000     => "megaohms",
    1_000         => "kiloohms"
    }
  
  def initialize(colors)
    @value = colors
      .map { |c| COLORS.index(c) }
        .then { |a, b, z| (a * 10 + b) * (10 ** z) }
  end

  def resistor
    unit = UNITS.keys.find { |k| @value >= k }
    value = 
      if unit
          "#{@value / unit} #{UNITS[unit]}"
        else
          "#{@value} ohms"
        end
    
  end
  
  def label
    "Resistor value: #{resistor}"
  end
end