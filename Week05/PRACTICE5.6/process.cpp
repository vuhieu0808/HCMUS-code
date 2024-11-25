#include <iostream>
#include <cstring>

#include "process.h"

void inputN(int& N, int& M) {    
    char line[MAX];
    do {
        printf("Enter N, M = ");
        fgets(line, MAX, stdin);
    } 
    while (sscanf(line, "%d%d", &N, &M) != 2 || N < 0 || M < 0);
}