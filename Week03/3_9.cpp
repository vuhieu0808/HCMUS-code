#include <stdio.h>
#include <math.h>

#define MAX 10000

bool isPrime(int x) {
    if (x < 2) return false;
    if (x == 2) return true;
    for (int i = 2; i * i <= x; ++i) if (x % i == 0) return false;
    return true;
}

int main(void) {
    char line[MAX];
    int N;
    do {
        printf("Enter a positive integer = ");
        fgets(line, MAX, stdin);
    } while (sscanf(line, "%d", &N) != 1 || N <= 0);
    
    int cnt = 0;
    for (int i = 2; i <= N; ++i) if (isPrime(i)) {
        ++cnt;
        printf("#%d = %d\n", cnt, i);
    }

    printf("There are %d prime numbers.\n", cnt);

    return 0;
}