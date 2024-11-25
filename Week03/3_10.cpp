#include <stdio.h>
#include <math.h>

#define MAX 10000

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}

int main(void) {
    char line[MAX];
    int a, b;
    do {
        printf("Enter 2 positive integers = ");
        fgets(line, MAX, stdin);
    } while (sscanf(line, "%d %d", &a, &b) != 2 || a <= 0 || b <= 0);
    
    int resGCD = gcd(a, b);
    int resLCM = a / resGCD * b;
    printf("GCD = %d\nLCM = %d\n", resGCD, resLCM);
    return 0;
}