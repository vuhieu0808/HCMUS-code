#include <iostream>
#include <cstring>
#include <algorithm>
#include <iomanip>

#include "process.h"

int main(void) {
    int N;
    inputN(N);
    Student st[N];
    for (int i = 0; i < N; ++i) inputST(st[i]);
    std::sort(st, st + N);
    int cnt = 0;
    for (int i = N - 1; i >= 0; --i) {
        if (compare(st[i].getGPA(), 8.5) >= 0) {
            ++cnt;
            printf("#%d. ", cnt);
            std::cout << "ID = " << st[i].id << ", NAME = " << st[i].name << ", GPA = " << st[i].getGPA() << '\n';
        }
    }

    return 0;
}