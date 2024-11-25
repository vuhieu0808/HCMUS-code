#include <bits/stdc++.h>

int Val(std::string s) {
    int res = 0;
    for (char c : s) {
        res = res + (c - '0');
    }
    return res % 10;
}

int main(void) {
    std::string x; std::getline(std::cin, x);
    x.erase(0, 22);
    while (x.back() == ' ') x.pop_back();
    std::cout <<  "Lucky number = " << Val(x) << '\n'; 
    return 0;
}