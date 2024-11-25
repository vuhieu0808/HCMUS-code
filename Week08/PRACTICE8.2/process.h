#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000

void input(char **s);
void join_string(char **res, char *s);
void join_char(char **res, char c);
char *numtostr(int num);
char *solve(char *s);
