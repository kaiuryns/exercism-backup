#include "rna_transcription.h"
#include <stdlib.h>

char *to_rna(const char *dna) {
    int size = 0;

    while (dna[size] != '\0') {
        size++;
    }

    char *rna = malloc(size + 1);   // +1 para o '\0'

    for (int i = 0; i < size; i++) {
        switch (dna[i]) {
            case 'C': rna[i] = 'G'; break;
            case 'G': rna[i] = 'C'; break;
            case 'T': rna[i] = 'A'; break;
            case 'A': rna[i] = 'U'; break;
            default: rna[i] = '\0'; break;
        }
    }

    rna[size] = '\0';
    return rna;
}