

#include <stdio.h>
#include <iostream>
#include <math.h>

int main(void) {
    int N;
    int numZeroFirst;
    bool ok;
    do {
        printf("Phone number: ");
        int cntDigit = 0;
        numZeroFirst = 0;
        char c;
        N = 0;
        ok = true;
        bool haveDiffZero = false;

        do {
            scanf("%c", &c);
            if (c != '0') haveDiffZero = true;
            else numZeroFirst += !haveDiffZero;
            if ('0' <= c && c <= '9') N = N * 10 + (c - '0'), ++cntDigit;
            else if (c != '\n') ok = false;
        }
        while (c != '\n');
        
        if (cntDigit > 10) ok = false;
    } while (!ok);
    
    int M = 0;
    while (N) {
        M = M * 10 + (N % 10);
        N /= 10;
    }

    while (numZeroFirst) {
        M *= 10;
        --numZeroFirst;
    }

    if (M % 10 == 0) printf("Zero ");
    if (M % 10 == 1) printf("One ");
    if (M % 10 == 2) printf("Two ");
    if (M % 10 == 3) printf("Three ");
    if (M % 10 == 4) printf("Four ");
    if (M % 10 == 5) printf("Five ");
    if (M % 10 == 6) printf("Six ");
    if (M % 10 == 7) printf("Seven ");
    if (M % 10 == 8) printf("Eight ");
    if (M % 10 == 9) printf("Nine ");
    M /= 10;
    while (M) {
        int x = M % 10; M /= 10;
        if (x == 0) printf("zero ");
        if (x == 1) printf("one ");
        if (x == 2) printf("two ");
        if (x == 3) printf("three ");
        if (x == 4) printf("four ");
        if (x == 5) printf("five ");
        if (x == 6) printf("six ");
        if (x == 7) printf("seven ");
        if (x == 8) printf("eight ");
        if (x == 9) printf("nine ");
    }
    return 0;
}