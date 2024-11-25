#include "process.h"

void input(char **s) {
    printf("Enter a sentence = ");
    char line[MAX];
    fgets(line, MAX, stdin);
    line[strlen(line) - 1] = 0;
    *s = (char *) malloc(sizeof(line) + 1);
    strcpy(*s, line);
}

void join_string(char **res, char *s) {
    int sz = strlen(*res) + strlen(s) + 1;
    *res = (char *) realloc(*res, sz);
    strcpy(*res + strlen(*res), s);
}

void join_char(char **res, char c) {
    int sz = strlen(*res);
    *res = (char *) realloc(*res, sz + 2);
    (*res)[sz] = c;
    (*res)[sz + 1] = '\0';
}

char *numtostr(int num) {
    int len = snprintf(NULL, 0, "%d", num); 
    char *str = (char *) malloc((len + 1) * sizeof(char)); 
    snprintf(str, len + 1, "%d", num);
    return str;
}

char *solve(char *s) {
    char *res = (char *) calloc(1, sizeof(char));
    char number[]{"0123456789"};
    char *pt = strpbrk(s, number);
    for (char *p = s; *p != '\0'; ) {
        if (p == pt) {
            int tmp = strtoll(p, &p, 10);
            ++tmp;
            char *tmpchar = numtostr(tmp);
            join_string(&res, tmpchar);
            free(tmpchar);
            pt = strpbrk(p, number);
        }
        else {
            join_char(&res, *p);
            ++p;
        }
    }
    return res;
}