#pragma once
#define MAX 1000

struct Student {
    std::string name, ID;
    float GPA;
    Student(std::string _name = "", std::string _ID = "", float _GPA = 0.0) {
        name = _name; ID = _ID; GPA = _GPA;
    }
};

void solve(std::string& line1, std::string& line2, int& n);
void outputGPA(int n, std::ofstream& out);