#include <algorithm>
#include <fstream>
#include <cstring>
#include <sstream>

#include "process.h"

Student data[MAX];

void solve(std::string& line1, std::string& line2, int& n) {
    int pos = line1.find('|');
    std::string name = "";
    for (int i = 0; i < pos; ++i) name += line1[i];
    for (int i = 0; i < name.length(); ++i) if ((!i && isalpha(name[i])) || (name[i - 1] == ' ' && isalpha(name[i]))) name[i] = toupper(name[i]);
    std::string ID = "";
    for (int i = pos + 1; i < line1.size(); ++i) ID += line1[i];
    std::stringstream ss(line2);
    float GPA = 0.0, x;
    int cnt = 0;
    while (ss >> x) {
        GPA += x; ++cnt;
    }
    GPA /= cnt;
    data[++n] = Student(name, ID, GPA);
}
void outputGPA(int n, std::ofstream& out) {
    std::sort(data + 1, data + n + 1, [&](Student i, Student j) {
        return i.GPA > j.GPA;
    });
    for (int i = 1; i <= n; ++i) out << data[i].ID << "|" << data[i].name << "|" << data[i].GPA << '\n';
}