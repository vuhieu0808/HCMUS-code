#include <iostream>
#include <cstring>
#include <algorithm>

#include "process.h"

int main(void) {
    printf("S = ");
    std::string s;
    getline(std::cin, s);
    solve(s);
    return 0;
}
