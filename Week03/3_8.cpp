#include <stdio.h>
#include <math.h>

#define MAX 10000

int main(void) {
    char line[MAX];
    int x;
    int mx = -__INT_MAX__;
    int mi = __INT_MAX__;
    int cnt = 0;
    do {
        ++cnt;
        do {
            printf("Number %d = ", cnt);
            fgets(line, MAX, stdin);
        }
        while (sscanf(line, "%d", &x) != 1);

        if (x != 0) {
            if (x > mx) mx = x;
            if (x < mi) mi = x;
        }
    }
    while (x != 0);
    printf("Max = %d\n", mx);
    printf("Min = %d\n", mi);
    
    return 0;
}