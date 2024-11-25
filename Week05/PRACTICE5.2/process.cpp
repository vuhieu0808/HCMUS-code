#include <iostream>
#include <algorithm>
#include "process.h"

#define MAX 100000

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

bool solveA(int N, int a[]) {
    return std::is_sorted(a, a + N);
}

bool solveB(int N, int a[]) {
    int b[N];
    for (int i = 0; i < N; ++i) b[i] = a[N - i - 1];
    for (int i = 0; i < N; ++i) if (a[i] != b[i]) return false;
    return true;
}

bool solveC(int N, int a[]) {
    if (N < 2) return false;
    int d = a[1] - a[0];
    for (int i = 1; i < N; ++i) if (i + 1 < N && a[i + 1] - a[i] != d) return false;
    return true;
}