#include <iostream>
#include <algorithm>
#include "process.h"

int main(void) {
    int N;
    inputN(N);
    int a[N];
    for (int i = 0; i < N; ++i) inputAI(i, a[i]);
    std::cout << "Array " << (solveA(N, a) ? "is " : "is not ") << "ascending.\n";
    std::cout << "Array " << (solveB(N, a) ? "is " : "is not ") << "symmetric.\n";
    std::cout << "Array " << (solveC(N, a) ? "is " : "is not ") << "a arithmetic progression.\n";
    return 0;
}