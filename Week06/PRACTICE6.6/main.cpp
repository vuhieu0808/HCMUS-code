#include <algorithm>
#include <fstream>
#include <cstring>
#include <sstream>

#include "process.h"

int main(void) {
    std::ifstream inp("STUDENT.TXT");
    std::ofstream out("GPA.TXT");
    std::string line1, line2;
    int n = 0;
    while (getline(inp, line1) && getline(inp, line2)) solve(line1, line2, n);
    outputGPA(n, out);
    inp.close();
    out.close();
    return 0;
}