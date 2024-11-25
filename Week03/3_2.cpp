#include <stdio.h>
#include <math.h>

#define MAX 10001

int cmp(double x, double y) {
    if (abs(x - y) < __FLT_EPSILON__) return 0;
    if (x + __FLT_EPSILON__ < y) return -1;
    else return 1;
}

int main(void) {
    char line[MAX];
    int a, b, c;
    do {
        printf("Enter coefficients a, b, c = ");
        fgets(line, MAX, stdin);
    } while (sscanf(line, "%d %d %d", &a, &b, &c) != 3);
    float delta = b * b - 4 * a * c;
    if (cmp(delta, 0) < 0) {
        printf("No solution!\n");
        return 0;
    }
    if (!cmp(delta, 0)) {
        float res = -1.f * b / (2.f * a);
        printf("Solution 1: %.6f\n", res);
        return 0;
    }
    delta = sqrt(delta);
    float x1 = (-1.f * b - delta) / (2.f * a);
    float x2 = (-1.f * b + delta) / (2.f * a);
    printf("Solution 1: %.6f\n", x1);
    printf("Solution 2: %.6f\n", x2);
    return 0;
}