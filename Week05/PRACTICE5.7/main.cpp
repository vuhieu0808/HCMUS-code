#include <iostream>
#include "process.h"

int main(void) {
    int N, M;
    inputN(N, M);
    int a[MAX][MAX];
    for (int i = 0; i < N; ++i) for (int j = 0; j < M; ++j) std::cin >> a[i][j];
    solveLeft(N, M, a); solveRight(N, M, a);
    return 0;
}