#include <stdio.h>
#include <math.h>

#define MAX 10000

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}

int main(void) {
    char line[MAX];
    int N, M;
    do {
        printf("Enter N, M = ");
        fgets(line, MAX, stdin);
    } while (sscanf(line, "%d %d", &N, &M) != 2 || M <= 0);
    printf("The first %d bit from the right of %d: ", M, N);
    for (int i = M - 1; i >= 0; --i) printf("%d", N >> i & 1);
    return 0;
}