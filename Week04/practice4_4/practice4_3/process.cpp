#include <stdio.h>
#include "process.h"

#define MAX 10000
void readInput(int& a, int &b, int &c) {
    char line[MAX];
    do {
        printf("Enter 3 positive real numbers = ");
        fgets(line, MAX, stdin);
    }
    while (sscanf(line, "%d %d %d", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <= 0);
}

void solve_prac4_3(void) {
    int a, b, c;
    readInput(a, b, c);
    if (!(a + b > c && a + c > b && b + c > a && a - b < c && a - c < b && b - c < a)) {
        printf("Cannot form a triangle!\n");
        return;
    }
    printf("Can form a triangle.\n");
    if (a == b && b == c) {
        printf("Equilateral triangle.\n");
        return;
    }
    if (a == b || b == c || a == c) {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("Right-isosceles triangle.\n");
            return;
        }
        printf("Isosceles triangle.\n");
        return;
    }
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        printf("Right triangle.\n");
        return;
    }
    printf("Normal triangle.\n");
}