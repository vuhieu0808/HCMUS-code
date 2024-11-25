#include <fstream>
#include <iostream>
#include <cstring>
#include "process.h"

void solve(std::string s, int& countWord, int& countNumber) {
    int n = (int) s.length();
    for (int i = 0; i < n - 1; ++i) {
        if (isdigit(s[i]) && !isdigit(s[i + 1])) ++countNumber;
        else if (isalpha(s[i]) && !isalpha(s[i + 1])) ++countWord;
    }
}