#include <iostream>
#include <cstring>

#include "process.h"

int main(void) {
    int N, M; inputN(N, M);
    int a[MAX][MAX];
    int sumRow[MAX], sumCol[MAX];
    memset(sumRow, 0, sizeof sumRow);
    memset(sumCol, 0, sizeof sumCol);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> a[i][j];
            sumRow[i] += a[i][j];
            sumCol[j] += a[i][j];
        }
    }
    for (int i = 0; i < N; ++i) for (int j = 0; j < M; ++j) {
        if (a[i][j] == sumRow[i] + sumCol[j] - 2 * a[i][j]) {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
    return 0;
}