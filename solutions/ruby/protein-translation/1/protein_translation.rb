class InvalidCodonError < ArgumentError; end

module Translation
  POTEIN = {
      "Methionine"    => %w[AUG],
      "Phenylalanine" => %w[UUU UUC],
      "Leucine"       => %w[UUA UUG],
      "Serine"        => %w[UCU UCC UCA UCG],
      "Tyrosine"      => %w[UAU UAC],
      "Cysteine"      => %w[UGU UGC],
      "Tryptophan"    => %w[UGG],
      "Stop"          => %w[UAA UAG UGA]
    }

    P_MAP = POTEIN.each_with_object({}) do |(name, code), hash|
      code.each { |c| hash[c] = name }
    end
  
  def self.of_rna(strand)
    rna = strand.scan(/.{1,3}/)

    return [] if strand.empty?

    rna.take_while { |r| P_MAP[r] != "Stop" }.map { |r| P_MAP[r] || raise(InvalidCodonError) }
  end
end