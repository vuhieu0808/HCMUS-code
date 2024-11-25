#include "process.h"

void solve(int n, Frac *&a, Frac *&b) {
    for (int i = 0; i < n; ++i) {
        bool ok = true;
        for (int j = 0; j < i; ++j) if (a[i] == a[j]) {
            ok = false;
            break;
        }
        if (ok) printf("%d/%d ", b[i].x, b[i].y);
    }
}