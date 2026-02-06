class AssemblyLine
  def initialize(speed)
    @speed = speed
  end

  def production_rate_per_hour
    production = @speed * 221
    rate = 1
    if @speed > 4
      rate -= 0.1
    end
    if @speed > 8
      rate -= 0.1
    end
    if @speed > 9
      rate -= 0.03
    end
    production * rate
  end

  def working_items_per_minute
    (production_rate_per_hour / 60).floor
  end
end
