#include <stdio.h>

#include "process.h"

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; ++i) if (x % i == 0) return false;
    return true;
}

void solve_prac4_1(void) {
    int N;
    readInput(N);
    int cnt = 0;
    for (int i = 1; i <= N; ++i) {
        if (isPrime(i)) {
            ++cnt;
            printf("#%d = %d\n", cnt, i);
        }
    }
    printf("There are %d prime numbers.\n", cnt);
}

#define MAX 10000
void readInput(int& N) {
    char line[MAX];
    do {
        printf("Enter a positive integer = ");
        fgets(line, MAX, stdin);
    }
    while (sscanf(line, "%d", &N) != 1 || N < 0);
}