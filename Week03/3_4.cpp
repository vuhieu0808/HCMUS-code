#include <stdio.h>
#include <math.h>

#define MAX 10000

int main(void) {
    char line[MAX];
    int N;
    do {
        fgets(line, MAX, stdin);
    }
    while (sscanf(line, "%d", &N) != 1 || N <= 0);
    long long A = 1;
    for (int i = 2; i <= N; ++i) A *= i;
    printf("N! = %lld\n", A);
    float B = 0;
    for (int i = 1; i <= N; ++i) {
        if (i & 1) B += 1.f / i;
        else B -= 1.f / i;
    }
    printf("ln(2) = %.6f\n", B);
    float C = 0;
    bool sign = 0;
    for (int i = 1; i <= 2 * N + 1; i += 2) {
        if (!sign) C += 1.f / i;
        else C -= 1.f / i;
        sign ^= 1;
    }
    C *= 4.f;
    printf("PI = %.6f\n", C);
    long long D = 0;
    for (int i = 1; i * i <= N; ++i) D += i * i;
    printf("S = %lld\n", D);
    return 0;
}