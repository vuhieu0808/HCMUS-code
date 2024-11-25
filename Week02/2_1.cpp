#include <bits/stdc++.h>

int val(std::string s) {
    int res = 0;
    for (char c : s) {
        res = res * 10 + (c - '0');
    }
    return res;
}

int main(void) {
    std::string name; std::getline(std::cin, name);
    std::string birth; std::getline(std::cin, birth);
    name.erase(0, 7); birth.erase(0, 13);
    while (name.back() == ' ') name.pop_back();
    while (birth.back() == ' ') birth.pop_back();
    std::cout << "Hello " << name << ", now you are " << 2024 - val(birth) << " years old.\n";
    return 0;
}