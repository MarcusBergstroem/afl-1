#include "hamming.h"
#include "string.h"

int hamming_distance(char dna1[], char dna2[]) {
    const int size = strlen(dna1);
    int dist = 0;

    for (int i=0; i < size; i++) {
        if (dna1[i] != dna2[i]) {
            dist++;
        }
    }

    return dist;
}
