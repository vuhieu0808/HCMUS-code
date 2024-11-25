#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    for (int i = 0; i < 4; ++i) cin >> s;
    float p, q; cin >> p >> q;
    float x = cbrt(sqrt(((p * p * p * p * p * p) / 27) + ((q * q) / 4)) - q / 2) 
            - cbrt(sqrt(((p * p * p * p * p * p) / 27) + ((q * q) / 4)) + q / 2);
    printf("Solution x = %.6f\n", x);
    return 0;
}