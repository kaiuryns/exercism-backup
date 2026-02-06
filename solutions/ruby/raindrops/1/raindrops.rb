module Raindrops
  def self.convert(number)
    final = ''

    if number % 3 == 0
      final << 'Pling'
    end
    if number % 5 == 0
      final << 'Plang'
    end
    if number % 7 == 0
      final << 'Plong'
    end

    final != '' ? final : number.to_s
  end
end