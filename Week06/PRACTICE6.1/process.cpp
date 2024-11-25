#include <iostream>
#include <cstring>
#include <algorithm>

#include "process.h"

std::string removeSpace(std::string& s) {
    bool haveFirst = false, haveLast = false;
    if (s[0] == '"') s.erase(s.begin()), haveFirst = true; 
    if (s.back() == '"') s.pop_back(), haveLast = true;
    while (s.back() == ' ') s.pop_back();
    reverse(s.begin(), s.end());
    while (s.back() == ' ') s.pop_back();
    reverse(s.begin(), s.end());
    std::string res = "";
    for (int i = 0; i < (int) s.length(); ++i) {
        if (i && s[i - 1] == ' ' && s[i] != ' ') {
            res += ' ';
            res += s[i];
        }
        else if (s[i] != ' ') res += s[i];
    }
    if (haveLast) res += '"';
    if (haveFirst) {
        reverse(res.begin(), res.end());
        res += '"';
        reverse(res.begin(), res.end());
    }
    return res;
}
