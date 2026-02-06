#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H

#include <string>

namespace rna_transcription 
{
    char to_rna(const char& dna);
    std::string to_rna(const std::string& dna);
}

#endif