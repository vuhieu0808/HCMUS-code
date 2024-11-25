#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    for (int i = 0; i < 3; ++i) cin >> s;
    long long money; cin >> money;
    printf("Note 20000: %ld\n", money / 20000);
    money -= 20000 * (money / 20000);
    printf("Note 10000: %ld\n", money / 10000);
    money -= 10000 * (money / 10000);
    printf("Note  5000: %ld\n", money / 5000);
    money -= 5000 * (money / 5000);
    printf("Note  1000: %ld\n", money / 1000);
    money -= 1000 * (money / 1000);
    printf("Remain money = %ld\n", money);
    return 0;
}