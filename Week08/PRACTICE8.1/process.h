#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000

void input(char **s, char **f, char **r);
void join_string(char **res, char *s);
void join_char(char **res, char c);
char *solve(char *s, char *f, char *r);
