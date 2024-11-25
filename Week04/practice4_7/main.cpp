#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <iomanip>

#include "process.h"

int main(void) {
    std::vector<Point> p;
    Input(p);
    polar_sort(p);
    std::cout << "Triangle perimeter = " << perimeter(p) << '\n';
    Point res = centroid(p);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Triangle centroid = (" << res.x << ", " << res.y << ")\n";
    return 0;
}