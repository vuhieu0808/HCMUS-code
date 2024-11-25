#include <iostream>

#include "process.h"

int main(void) {
    int N;
    inputN(N);
    int a[N];
    for (int i = 0; i < N; ++i) inputAI(i, a[i]);
    solve(N, a);
    return 0;
}