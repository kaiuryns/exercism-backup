class ResistorColorTrio
  COLORS = %w[black brown red orange yellow green blue violet grey white]
  
  def initialize(colors)
    first, second, zeros = colors.map { |c| COLORS.index(c) }
    @value = "#{first}#{second}#{'0' * zeros}"
  end

  def resistor
    value = @value.to_i
    if value >= 1_000_000_000
      "#{value / 1_000_000_000} gigaohms"
    elsif value >= 1_000_000
      "#{value / 1_000_000} megaohms"
    elsif value >= 1_000
      "#{value / 1_000} kiloohms"
    else
      "#{value} ohms"
    end
  end
  
  def label
    "Resistor value: #{resistor}"
  end
end