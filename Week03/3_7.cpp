#include <stdio.h>

#define MAX 10000

int main(void) {
    char line[MAX];
    int a, b;
    do {
        printf("Enter old and new kWh = ");
        fgets(line, MAX, stdin);
    }
    while (sscanf(line, "%d %d", &a, &b) != 2 || a <= 0 || b <= 0 || a > b);
    int kwh = b - a;
    if (kwh <= 100) {
        printf("Result = %lld\n", kwh * 1549);
        return 0;
    }
    if (kwh <= 150) {
        printf("Result = %lld\n", kwh * 1600);
        return 0;
    }
    if (kwh <= 200) {
        printf("Result = %lld\n", kwh * 1858);
        return 0;
    }
    if (kwh <= 300) {
        printf("Result = %lld\n", kwh * 2340);
        return 0;
    }
    if (kwh <= 400) {
        printf("Result = %lld\n", kwh * 2615);
        return 0;
    }
    printf("Result = %lld\n", kwh * 2701);
    return 0;
}