#include <iostream>
#include "process.h"

void inputN(int& N, int& M) {    
    char line[MAX];
    do {
        printf("Enter N, M = ");
        fgets(line, MAX, stdin);
    } 
    while (sscanf(line, "%d%d", &N, &M) != 2 || N < 0 || M < 0);
}

void solveLeft(int N, int M, int a[MAX][MAX]) {
    printf("Rotate left matrix 90 degree:\n");
    for (int j = M - 1; j >= 0; --j) for (int i = 0; i < N; ++i) 
        std::cout << a[i][j] << " \n"[i == N - 1];
}
void solveRight(int N, int M, int a[MAX][MAX]) {
    printf("Rotate right matrix 90 degree:\n");
    for (int j = 0; j < M; ++j) for (int i = N - 1; i >= 0; --i) 
        std::cout << a[i][j] << " \n"[i == 0];
}