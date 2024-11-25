#include <stdio.h>

#define MAX 10000

int main(void) {
    char line[MAX];
    int month, year;
    do {
        printf("Enter month and year = ");
        fgets(line, MAX, stdin);
    }
    while (sscanf(line, "%d %d", &month, &year) != 2);
    int days = 0;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) days = 31;
    bool flag = ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0));
    if (month == 2) days = 28 + flag;
    if (!days) days = 30;
    printf("Month %d in year %d has %d days.", month, year, days);
    return 0;
}