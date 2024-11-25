#include <iostream>
#include <cstring>
#include <fstream>

#include "process.h"
int n, m;
int a[MAX][MAX];

void input(void) {
    std::ifstream inp("MATRIX.TXT");
    inp >> n >> m;
    for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) inp >> a[i][j];
    inp.close();
}

void solve(void) {
    std::ofstream out("OUTPUT.TXT");
    out << m << ' ' << n << '\n';
    for (int j = m - 1; j >= 0; --j) for (int i = 0; i < n; ++i)
        out << a[i][j] << " \n"[i == n - 1];
    out.close();
}
