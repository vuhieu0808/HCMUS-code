#include <iostream>
#include <cstring>
#include <algorithm>

#include "process.h"

int main(void) {
    printf("Enter a sentence = ");
    std::string s;
    getline(std::cin, s);   
    std::cout << removeSpace(s) << '\n';
    return 0;
}