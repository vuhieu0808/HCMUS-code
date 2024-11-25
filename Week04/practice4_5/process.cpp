#include <stdio.h>
#include "process.h"

#define MAX 10000

void Input(Fraction& N, Fraction& M) {
    char line[MAX];
    do {
        printf("Enter 2 fractions = ");
        fgets(line, MAX, stdin);
    }
    while (sscanf(line, "%d/%d %d/%d", &N.x, &N.y, &M.x, &M.y) != 4 || N.y == 0 || M.y == 0);
}

void OutputFraction(Fraction res) {
    if (!res.x || !res.y) {
        printf("0 ");
        return;
    }
    printf("%d/%d ", res.x, res.y);
}

Fraction solveAdd(Fraction n, Fraction m) {
    long long bc = lcm(n.y, m.y);
    return Fraction(n.x * (bc / n.y) + m.x * (bc / m.y), bc);
}

Fraction solveMul(Fraction n, Fraction m) {
    return Fraction(n.x * m.x, n.y * m.y);
}

Fraction solveInverse(Fraction n) {
    return Fraction(n.y, n.x);
}

Fraction solveReduce(Fraction n) {
    long long uc = gcd(n.x, n.y);
    return Fraction(n.x / uc, n.y / uc);
}

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long tmp = a % b;
        a = b, b = tmp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}
