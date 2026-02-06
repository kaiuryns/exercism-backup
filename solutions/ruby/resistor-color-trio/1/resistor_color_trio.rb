class ResistorColorTrio
  COLORS = %w[black brown red orange yellow green blue violet grey white]
  
  def initialize(colors)
    @colors = colors
    calc
  end

  def calc 
    @value = ((COLORS.index(@colors[0]) * 10) + COLORS.index(@colors[1])) * 10 ** COLORS.index(@colors[2])

    if @value % 1000000000 == 0 &&  @value.nonzero?
      @unit = 'gigaohms'
      @value /= 1000000000
    elsif @value % 1000000 == 0 &&  @value.nonzero?
      @unit = 'megaohms'
      @value /= 1000000
    elsif @value % 1000 == 0 &&  @value.nonzero?
      @unit = 'kiloohms'
      @value /= 1000
    else
      @unit = 'ohms'
    end
  end
  
  def label
    "Resistor value: #{@value} #{@unit}"
  end
end