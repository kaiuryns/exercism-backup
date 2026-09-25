module ETL
  def self.transform(old)
    new = {}

    old.each do |p, s|
      s.each do |l|
        new[l.downcase] = p
      end
    end

    new
  end
end