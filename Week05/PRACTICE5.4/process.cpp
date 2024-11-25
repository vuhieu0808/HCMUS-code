#include <iostream> 
#include "process.h"

#define MAX 100000

void inputN(int& N) {    
    char line[MAX];
    do {
        printf("Enter N = ");
        fgets(line, MAX, stdin);
    } 
    while (sscanf(line, "%d", &N) != 1 || N < 0);
}
