module EliudsEggs
  def self.egg_count(binary)
    eggs = 0
    while binary > 0
      if binary & 1 == 1
        eggs += 1
      end
      binary >>= 1
    end
    eggs
  end 
end