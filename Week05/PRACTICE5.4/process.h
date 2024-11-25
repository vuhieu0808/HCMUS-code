#pragma once

struct Date {
    int day, month, year;
    Date(int _day = 0, int _month = 0, int _year = 0) {
        day = _day; month = _month; year = _year;
    }
    bool operator < (const Date& other) const {
        return (year == other.year ? (month == other.month ? day < other.day : month < other.month) : year < other.year);
    }
};

void inputN(int& N);