#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s[2]; cin >> s[0] >> s[1];
    float d; cin >> d;
    printf("Fahrenheit = %.1f\n", d * 1.8 + 32);
    printf("Kelvin = %.1f\n", d + 273);
    
    return 0;
}