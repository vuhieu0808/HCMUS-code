#pragma once

#define MAX 10000

struct Fraction {
    long long x, y;
    Fraction(long long _x = 0, long long _y = 0) {
        x = _x; y = _y;
    }
};

void Input(Fraction& N, Fraction& M);
void OutputFraction(Fraction res);

long long gcd(long long a, long long b);
long long lcm(long long a, long long b);

Fraction solveAdd(Fraction n, Fraction m);
Fraction solveMul(Fraction n, Fraction m);
Fraction solveInverse(Fraction n);
Fraction solveReduce(Fraction n);