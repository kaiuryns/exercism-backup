class Microwave
  attr_reader :timer
  
  def initialize(mmss)
    m = mmss / 100
    s = mmss % 100

    m += s / 60
    s = s % 60

    @timer = "%02d:%02d" % [m, s]
  end
end
