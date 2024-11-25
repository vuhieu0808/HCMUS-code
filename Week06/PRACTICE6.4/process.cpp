#include <fstream>

#include "process.h"

int n, a[MAX];

void input(void) {
    std::ifstream inp("NUMBER.TXT");
    int x;
    while (inp >> x) {
        a[++n] = x;
    }
    inp.close();
}

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; ++i) if (n % i == 0) return false;
    return true;
}

void solve(void) {
    std::ofstream out("PRIME.TXT");
    for (int i = 1; i <= n; ++i) if (isPrime(a[i])) out << a[i] << ' ';
    out.close();
}