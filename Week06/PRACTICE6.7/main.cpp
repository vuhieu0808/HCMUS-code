#include <fstream>
#include <iostream>
#include <cstring>

#include "process.h"

int main(void) {
    std::ifstream inp("INPUT.TXT");
    std::string s;
    getline(inp, s);
    inp.close();
    int countWord = 0, countNumber = 0;
    s += '?';
    solve(s, countWord, countNumber);
    printf("Word count: %d.\nNumber count: %d.\n", countWord, countNumber);
    return 0;
}