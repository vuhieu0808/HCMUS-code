#include <iostream>
#include "process.h"

#define MAX 100000

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) if (n % i == 0) return false;
    return true;
}

void inputN(int& N) {    
    char line[MAX];
    do {
        printf("Enter N = ");
        fgets(line, MAX, stdin);
    } 
    while (sscanf(line, "%d", &N) != 1 || N < 0);
}

void inputAI(int i, int& x) {
    char line[MAX];
    do {
        printf("Element %d = ", i);
        fgets(line, MAX, stdin);
    }
    while (sscanf(line, "%d", &x) != 1);
}

void solve(int N, int a[]) {
    int neg = 0, primes = 0;
    for (int i = 0; i < N; ++i) {
        if (a[i] < 0) ++neg;
        else if (isPrime(a[i])) ++primes;
    }
    printf("Negative numbers: %d.\nPrime numbers: %d.", neg, primes);
}
