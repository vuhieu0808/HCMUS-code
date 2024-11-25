#include "process.h"

int main(void) {
    printf("Number of fractions = ");
    int n; scanf("%d", &n);
    Frac *a = new Frac[n], *b = new Frac[n];
    for (int i = 0; i < n; ++i) {
        printf("Fraction %d = ", i);
        scanf("%d/%d", &a[i].x, &a[i].y);
        b[i] = a[i];
        a[i].simplify();
    }
    solve(n, a, b);
    return 0;
}