#include <stdio.h>

#include "process.h"

#define MAX 10000
void readInput(int& a, int& b, char& op) {
    char line[MAX];
    do {
        printf("Enter 2 integers = ");
        fgets(line, MAX, stdin);
    }
    while (sscanf(line, "%d%d", &a, &b) != 2);

    do {
        printf("Enter an opertor opertor (+, -, *, /, %) = ");
        fgets(line, MAX, stdin);
    }
    while (sscanf(line, "%c", &op) != 1 || (op != '+' && op != '-' && op != '*' && op != '/' && op != '%'));
}

void writeOutput(long long res, bool ok) {
    if (ok) {
        printf("Result = %d\n", res);
    }
    else {
        printf("Error: divided by zero.\n");
    }
}

void solve_prac4_2(void) {
    int a, b; char op;
    readInput(a, b, op);
    long long res = 0;
    bool ok = true;
    if (op == '+') res = a + b;
    else if (op == '-') res = a - b;
    else if (op == '*') res = a * b;
    else {
        if (b == 0) ok = false;
        else {
            if (op == '/') res = a / b;
            else res = a % b;
        }
    }
    writeOutput(res, ok);
}