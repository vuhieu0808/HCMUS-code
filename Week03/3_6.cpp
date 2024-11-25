#include <stdio.h>

#define MAX 10000

int main(void) {
    char line[MAX];
    int a, b, c;
    do {
        printf("Enter 3 positive real numbers = ");
        fgets(line, MAX, stdin);
    }
    while (sscanf(line, "%d %d %d", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <= 0);
    if (!(a + b > c && a + c > b && b + c > a && a - b < c && a - c < b && b - c < a)) {
        printf("Cannot form a triangle!\n");
        return 0;
    }
    printf("Can form a triangle.\n");
    if (a == b && b == c) {
        printf("Equilateral triangle.\n");
        return 0;
    }
    if (a == b || b == c || a == c) {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("Right-isosceles triangle.\n");
            return 0;
        }
        printf("Isosceles triangle.\n");
        return 0;
    }
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        printf("Right triangle.\n");
        return 0;
    }
    printf("Normal triangle.\n");
    return 0;
}