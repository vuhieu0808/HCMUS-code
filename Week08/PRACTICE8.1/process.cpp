#include "process.h"

void input(char **s, char **f, char **r) {
    printf("Enter a sentence = ");
    char line[MAX];
    fgets(line, MAX, stdin);
    line[strlen(line) - 1] = 0;
    *s = (char *) malloc(sizeof(line) + 1);
    strcpy(*s, line);

    printf("Enter a word = ");
    fgets(line, MAX, stdin);
    line[strlen(line) - 1] = 0;
    *f = (char *) malloc(sizeof(line) + 1);
    strcpy(*f, line);
    
    printf("Enter a replacing word = ");
    fgets(line, MAX, stdin);
    line[strlen(line) - 1] = 0;
    *r = (char *) malloc(sizeof(line) + 1);
    strcpy(*r, line);
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

char *solve(char *s, char *f, char *r) {
    char *res = (char *) calloc(1, sizeof(char));
    int len = strlen(f);
    char *pt = strstr(s, f);
    for (char *p = s; *p != '\0'; ) {
        if (p == pt) {
            join_string(&res, r);
            p += len;
            pt = strstr(p, f);
        }
        else {
            join_char(&res, *p);
            ++p;
        }
    }
    free(pt);
    return res;
}
