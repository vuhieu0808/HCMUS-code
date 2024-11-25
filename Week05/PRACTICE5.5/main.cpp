#include <iostream>
#include "process.h"

int main(void) {
    int N; inputN(N);
    int a[MAX][MAX];
    for (int i = 0; i < N; ++i) for (int j = 0; j < N; ++j) std::cin >> a[i][j];
    calcSumDiagonal(N, a);
    solveB(N, a);
    std::cout << "It " << (magicSquare(N, a) ? "is " : "is not ") << "a magic square\n";
    return 0;
}