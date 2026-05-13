class RunLengthEncoding
  def self.encode(code)
    code.gsub(/(.)\1+/) { |l| "#{l.length}#{l[0]}"}
  end

  def self.decode(code)
    code.scan(/(\d*)(.)/).map { |n, l| l * (n.empty? ? 1 : n.to_i) }.join
  end
end