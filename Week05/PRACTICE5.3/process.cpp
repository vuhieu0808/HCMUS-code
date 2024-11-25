#include <iostream>
#include <cstring>
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

void inputST(Student &st) {
    // std::cin.ignore();
    printf("Student ID = "); getline(std::cin, st.id);
    printf("Full name = "); getline(std::cin, st.name);
    char line[MAX];
    do {
        printf("Enter math score = ");
        fgets(line, MAX, stdin);
    }
    while (sscanf(line, "%f", &st.math) != 1 || st.math + ESP < 0);
    do {
        printf("Enter literature score = ");
        fgets(line, MAX, stdin);
    }
    while (sscanf(line, "%f", &st.literature) != 1 || st.literature + ESP < 0);
}

float ABS(float x, float y) {
    if (x + ESP < y) std::swap(x, y);
    return x - y;
}

int compare(float x, float y) {
    double r = ABS(x, y);
    if (r < ESP) return 0;
    if (x + ESP < y) return -1;
    return 1;
}
