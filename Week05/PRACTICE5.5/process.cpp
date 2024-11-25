#include <iostream>
#include "process.h"

void inputN(int& N) {    
    char line[MAX];
    do {
        printf("Enter N = ");
        fgets(line, MAX, stdin);
    } 
    while (sscanf(line, "%d", &N) != 1 || N < 0);
}

void calcSumDiagonal(int N, int a[MAX][MAX]) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < N; ++i) {
        sum1 += a[i][i];
        sum2 += a[i][N - 1 - i];
    }
    printf("Main diagonal = %d.\nAnti-diagonal = %d.\n", sum1, sum2);
}

void solveB(int N, int a[MAX][MAX]) {
    int mx = INT_MIN, ind = -1;
    for (int i = 0; i < N; ++i) {
        int sum = 0;
        for (int j = 0; j < N; ++j) sum += a[i][j];
        if (sum > mx) {
            mx = sum;
            ind = i;
        }
    }
    printf("Row %d having max sum of elements.\n", ind);
}

bool magicSquare(int N, int a[MAX][MAX]) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < N; ++i) {
        sum1 += a[i][i];
        sum2 += a[i][N - 1 - i];
    }
    if (sum1 != sum2) return false;
    for (int i = 0; i < N; ++i) {
        int sum = 0;
        for (int j = 0; j < N; ++j) sum += a[i][j];
        if (sum != sum1) return false;
    }
    for (int j = 0; j < N; ++j) {
        int sum = 0;
        for (int i = 0; i < N; ++i) sum += a[i][j];
        if (sum != sum1) return false;
    }
    return true;
}
