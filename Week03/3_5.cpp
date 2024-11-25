#include <stdio.h>
#include <windows.h>

int main(void) {
    int cnt = 0;
    for (int i = 100; i < 1000; ++i) {
        int x = i;
        int ones_dight = x % 10; x /= 10;
        int tens_dight = x % 10; x /= 10;
        int hundreds_dight = x;
        if (tens_dight == hundreds_dight + ones_dight) {
            ++cnt;
            printf("%d: %d\n", cnt, i);
            Sleep(1000);
        }
    }
    return 0;
}