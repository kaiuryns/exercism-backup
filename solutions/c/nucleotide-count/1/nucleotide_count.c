#include "nucleotide_count.h"
#include <stdio.h>
#include <stdlib.h>

char *count(const char *dna_strand) {
    int dna_count[4] = {0};

    while (*dna_strand) {
        if (*dna_strand == 'A') dna_count[0]++;
        else if (*dna_strand == 'C') dna_count[1]++;
        else if (*dna_strand == 'G') dna_count[2]++;
        else if (*dna_strand == 'T') dna_count[3]++;
        else {
            char *empty = malloc(1);
            if (empty) 
                *empty = '\0';
            return empty;
        }
        dna_strand++;
    }
    char *result = malloc(19); 
    
    if (!result) 
        return NULL;

    sprintf(result, "A:%d C:%d G:%d T:%d", 
            dna_count[0], dna_count[1], dna_count[2], dna_count[3]);
    
    return result;
}
