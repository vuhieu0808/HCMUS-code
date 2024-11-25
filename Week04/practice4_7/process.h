#pragma once

#define double long double

const double inf = 1e100;
const double eps = 1e-9;
const double PI = acos((double)-1.0);

int sign(double x);

struct Point {
    double x, y;
    Point() { x = 0, y = 0; }
    Point(double x, double y) : x(x), y(y) {}
    Point(const Point &p) : x(p.x), y(p.y)    {}
    Point operator + (const Point &a) const { return Point(x + a.x, y + a.y); }
    Point operator - (const Point &a) const { return Point(x - a.x, y - a.y); }
    Point operator * (const double a) const { return Point(x * a, y * a); }
    friend Point operator * (const double &a, const Point &b) { return Point(a * b.x, a * b.y); }
    Point operator / (const double a) const { return Point(x / a, y / a); }
    bool operator == (Point a) const { return sign(a.x - x) == 0 && sign(a.y - y) == 0; }
    bool operator != (Point a) const { return !(*this == a); }
    bool operator < (Point a) const { return sign(a.x - x) == 0 ? y < a.y : x < a.x; }
    bool operator > (Point a) const { return sign(a.x - x) == 0 ? y > a.y : x > a.x; }
    double norm() { return sqrt(x * x + y * y); }
    double norm2() { return x * x + y * y; }
    Point perp() { return Point(-y, x); }
    double arg() { return atan2(y, x); }
    Point truncate(double r) { /// returns a vector with norm r and having same direction
        double k = norm();
        if (!sign(k)) return *this;
        r /= k;
        return Point(x * r, y * r);
    }
};
inline double dot(Point a, Point b);
inline double dist(Point a, Point b);
inline double cross(Point a, Point b);
bool half(Point p);
void polar_sort(std::vector<Point> &v);
double perimeter(std::vector<Point> &p);
Point centroid(std::vector<Point> &p);

void Input(std::vector<Point>& p);