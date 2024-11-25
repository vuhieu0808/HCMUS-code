#pragma once

#include <iostream>
#include <algorithm>

struct Frac {
    int x, y;
    Frac(int _x = 0, int _y = 0) {
        x = _x; y = _y;
    }
    void simplify(void) {
        int g = std::__gcd(x, y);
        x /= g; y /= g;
    }
    bool operator == (const Frac& other) const {
        return x == other.x && y == other.y;
    }
};

void solve(int n, Frac *&a, Frac *&b);