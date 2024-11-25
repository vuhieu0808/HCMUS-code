#include "process.h"

int main(void) {
    char *s, *f, *r;
    input(&s, &f, &r);
    char *res = solve(s, f, r);
    printf("%s\n", res);
    free(s); free(f); free(r);
    free(res);
    return 0;
}