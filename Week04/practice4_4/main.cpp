#include <iostream>

#include "practice4_1\\process.h"
#include "practice4_2\\process.h"
#include "practice4_3\\process.h"

#define MAX 10000

int main() {
    int N;
    char line[MAX];
    do {
        system("CLS");
        for (int i = 1; i <= 3; ++i) {
            printf("%d. Practice 4.%d.\n", i, i);
        }
        printf("4. Exit.\n");
        printf("Selection (1-4): ");
        fgets(line, MAX, stdin);
        
        bool check = sscanf(line, "%d", &N);
        if (!check || !(1 <= N && N <= 4)) continue;

        if (N == 1) {
            solve_prac4_1();
        }
        if (N == 2) {
            solve_prac4_2();
        }
        if (N == 3) {
            solve_prac4_3();
        }
        if (N == 4) return 0;
        system("pause");
    }
    while (true);


    return 0;
}
