#include "process.h"

int main(void) {
    char *s;
    input(&s);
    char *res = solve(s);
    printf("%s\n", res);
    free(res);
    return 0;
}