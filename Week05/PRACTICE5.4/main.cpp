#include <iostream>
#include <algorithm>
#include <iomanip>

#include "process.h"

int main(void) {
    int N; inputN(N);
    Date date[N];
    for (int i = 0; i < N; ++i) {
        printf("Input a date with format (dd-MM-yyyy): ");
        scanf("%d-%d-%d", &date[i].day, &date[i].month, &date[i].year);
    }
    std::sort(date, date + N);
    printf("The list from the latest date to the oldest one with format (dd-MM-yyyy).\n");
    int cnt = 0;
    for (int i = N - 1; i >= 0; --i) {
        ++cnt;
        printf("#%d. ", cnt);
        std::cout << std::setw(2) << std::setfill('0') << std::right << date[i].day << " - "
                  << std::setw(2) << std::setfill('0') << std::right << date[i].month << " - "
                  << std::setw(4) << std::setfill('0') << std::right << date[i].year << '\n';
    }
    return 0;
}