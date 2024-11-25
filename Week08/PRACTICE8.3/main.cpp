#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *solve(void) {
    char *res = NULL;
    int sz = 0, len = 1;
    char c, prev = 'z';
    res = (char *) calloc(1, sizeof(char));
    while (true) {
        c = getchar();
        if (c == '\n' && prev == '.') break;
        if (sz + 1 >= len) {
            len <<= 1;
            res = (char *) realloc(res, len * sizeof(char));
        }
        res[sz++] = c;
        prev = c;
    }
    res[sz] = '\0';
    return res;
}

int main(void) {
    char *res = solve();
    printf("%s\n", res);
    free(res);
    return 0;
}