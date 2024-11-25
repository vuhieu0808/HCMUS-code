#include <iostream>
#include <cstring>
#include <algorithm>

#include "process.h"

void solve(std::string s) {
    int cnt[MAX];
    memset(cnt, 0, sizeof cnt);
    for (char c : s) {
        if (c != ' ') ++cnt[c];
    }
    int order[MAX];
    for (int i = 0; i < MAX; ++i) order[i] = i;
    std::sort(order, order + MAX, [&](int i, int j) {
        return cnt[i] == cnt[j] ? i < j : cnt[i] > cnt[j];
    });
    int lst = -1;
    for (int i = 0; i < MAX; ++i) {
        int x = order[i];
        if (!cnt[x]) continue;
        if (cnt[x] != lst) {
            if (lst != -1) std::cout << '\n';
            lst = cnt[x];
            std::cout << lst << ": " << (char) x << ' ';
        }
        else std::cout << (char) x << ' ';
    }
}