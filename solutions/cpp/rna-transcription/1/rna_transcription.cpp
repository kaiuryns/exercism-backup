#include "rna_transcription.h"

namespace rna_transcription 
{
    char to_rna(const char& dna)
    {
        char rna;
        
        switch (dna)
        {
        case 'C':
            rna = 'G';
            break;
        case 'G':
            rna = 'C';
            break;
        case 'A':
            rna = 'U';
            break;
        case 'T':
            rna = 'A';
            break;
        }
        return rna;
    }
    
    std::string to_rna(const std::string& dna)
    {
        std::string rna;
    
        for (char nucleotides : dna)
        {
            switch (nucleotides)
            {
            case 'C':
                rna.push_back('G');
                break;
            case 'G':
                rna.push_back('C');
                break;
            case 'A':
                rna.push_back('U');
                break;
            case 'T':
                rna.push_back('A');
                break;
            }
        }
        return rna;
    }
}
