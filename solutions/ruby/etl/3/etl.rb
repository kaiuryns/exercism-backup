module ETL
  def self.transform(old)
    old.flat_map { |p, s| s.map { |l| [l.downcase, p] } }.to_h
  end
end