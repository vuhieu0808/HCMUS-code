#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    for (int i = 0; i < 5; ++i) cin >> s;
    long long t1[3], t2[3];
    for (int i = 0; i < 3; ++i) cin >> t1[i];
    for (int i = 0; i < 5; ++i) cin >> s;
    for (int i = 0; i < 3; ++i) cin >> t2[i];
    printf("Distance = %ld\n", t2[0] * 3600 + t2[1] * 60 + t2[2] - t1[0] * 3600 - t1[1] * 60 - t1[2]);
    
    return 0;
}