#include <stdio.h>

#include "process.h"

int main(void) {
    Fraction N, M;
    Input(N, M);
    printf("Add 2 fractions = "); OutputFraction(solveAdd(N, M)); printf("\n");
    printf("Multiply 2 fractions = "); OutputFraction(solveMul(N, M)); printf("\n");
    printf("Inverse of 2 fractions: "); OutputFraction(solveInverse(N)); OutputFraction(solveInverse(M)); printf("\n"); 
    printf("Reduce of 2 fractions : "); OutputFraction(solveReduce(N)); OutputFraction(solveReduce(M)); printf("\n");   
    return 0;
}