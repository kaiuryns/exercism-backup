#include "protein_translation.h"
#include <string.h>

typedef struct {
    const char code[4];
    amino_acid_t aminoacid;
} k_map_t;

protein_t protein(const char *const rna) {
    protein_t p = { .valid = true, .count = 0 };
    
    if (!rna) {
        p.valid = false;
        return p;
    }
    
    const k_map_t map[] = {
        {"AUG", Methionine},
        {"UUU", Phenylalanine}, {"UUC", Phenylalanine},
        {"UUA", Leucine}, {"UUG", Leucine},
        {"UCU", Serine}, {"UCC", Serine}, {"UCA", Serine}, {"UCG", Serine},
        {"UAU", Tyrosine}, {"UAC", Tyrosine},
        {"UGU", Cysteine}, {"UGC", Cysteine},
        {"UGG", Tryptophan},
        {"UAA", Stop}, {"UAG", Stop}, {"UGA", Stop}
    };

    size_t map_size = sizeof(map) / sizeof(map[0]);
    
    for (size_t i = 0; rna[i] != '\0'; i += 3) {
        bool found = false;

        if (rna[i+1] == '\0' || rna[i+2] == '\0') {
            p.valid = false;
            break;
        }
        
        for (size_t j = 0; j < map_size; j++) {
            if (!strncmp(&rna[i], map[j].code, 3)) {
                if (map[j].aminoacid == Stop) {
                    return p;
                }

                p.amino_acids[p.count++] = map[j].aminoacid;
                found = true;
                break; 
            }
        }
        if (!found) {
            p.valid = false;
            break;
        }
    }
    return p;
}