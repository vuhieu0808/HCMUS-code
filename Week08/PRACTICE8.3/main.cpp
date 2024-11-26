#include "process.h"

int main(void) {
    char *res = solve();
    printf("%s\n", res);
    free(res);
    return 0;
}