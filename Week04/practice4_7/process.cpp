#include <vector>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include "process.h"

int sign(double x) { return (x > eps) - (x < -eps); }

inline double dot(Point a, Point b) { return a.x * b.x + a.y * b.y; }
inline double dist(Point a, Point b) { return sqrt(dot(a - b, a - b)); }
inline double cross(Point a, Point b) { return a.x * b.y - a.y * b.x; }

bool half(Point p) {
    return p.y > 0.0 || (p.y == 0.0 && p.x < 0.0);
}

void polar_sort(std::vector<Point> &v) { /// sort points in counterclockwise
    sort(v.begin(), v.end(), [](Point a, Point b) {
        return std::make_tuple(half(a), 0.0, a.norm2()) < std::make_tuple(half(b), cross(a, b), b.norm2());
    });
}

double perimeter(std::vector<Point> &p) {
    double ans = 0; int n = p.size();
    for (int i = 0; i < n; i++) ans += dist(p[i], p[(i + 1) % n]);
    return ans;
}

Point centroid(std::vector<Point> &p) {
    int n = p.size(); Point c(0, 0);
    double sum = 0;
    for (int i = 0; i < n; i++) sum += cross(p[i], p[(i + 1) % n]);
    double scale = 3.0 * sum;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        c = c + (p[i] + p[j]) * cross(p[i], p[j]);
    }
    return c / scale;
}

#define MAX 100000
void Input(std::vector<Point>& p) {
    char line[MAX];
    do {
        printf("Enter information of a triangle: ");
        fgets(line, MAX, stdin);
        int a, b, c, d, e, f;
        bool check = sscanf(line, "%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f) == 6;
        if (!check) continue;
        p.push_back(Point(a, b));
        p.push_back(Point(c, d));
        p.push_back(Point(e, f));
        break;
    } while(true);
}