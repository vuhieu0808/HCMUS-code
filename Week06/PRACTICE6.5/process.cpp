#include <fstream>
#include <algorithm>
#include <cstring>

std::string removeSpace(std::string s) {
    while (s.back() == ' ') s.pop_back();
    reverse(s.begin(), s.end());
    while (s.back() == ' ') s.pop_back();
    reverse(s.begin(), s.end());
    std::string res = "";
    for (int i = 0; i < (int) s.length(); ++i) {
        if (i && s[i - 1] == ' ' && s[i] != ' ') {
            res += ' ';
            res += s[i];
        }
        else if (s[i] != ' ') res += s[i];
    }
    return res;
}

bool check(std::string line, int &A, int &B, char &op) {
    bool ok = true, haveFirst = false, haveSecond = false;
    A = 0, B = 0;
    op = '?';
    line = removeSpace(line);
    int sign[2];
    sign[0] = sign[1] = 1;
    for (char c : line) {
        if (c != ' ' && c != '+' && c != '-' && c != '*' && c != '/' && !isdigit(c)) {
            ok = false;
            break;
        }
    }
    if (isdigit(line[0])) {
        char lst = '+';
        for (int i = 0; i < line.size(); ++i) {
            if (line[i] == ' ') continue;

            if (isdigit(line[i])) {
                if (op == '?') A = A * 10 + (line[i] - '0'), haveFirst = true;
                else B = B * 10 + (line[i] - '0'), haveSecond = true;
                lst = line[i];
            }
            else {
                if (op == '?') op = line[i], lst = line[i];
                else {
                    if (line[i] == '*' || line[i] == '/') ok = false;
                    else if (isdigit(lst)) ok = false;
                    else {
                        sign[1] *= (line[i] == '+' ? 1 : -1);
                        lst = line[i];
                    }
                }
            }
        }
    }
    else {
        int pos = -1;
        for (int i = 0; i < line.size(); ++i) {
            if (line[i] == ' ') continue;
            if (isdigit(line[i])) {
                pos = i; break;
            }
            if (line[i] == '*' || line[i] == '/') ok = false;
            else sign[0] *= (line[i] == '+' ? 1 : -1);
        }
        char lst = '+';
        for (int i = pos; i < line.size(); ++i) {
            if (line[i] == ' ') continue;

            if (isdigit(line[i])) {
                if (op == '?') A = A * 10 + (line[i] - '0'), haveFirst = true;
                else B = B * 10 + (line[i] - '0'), haveSecond = true;
                lst = line[i];
            }
            else {
                if (op == '?') op = line[i], lst = line[i];
                else {
                    if (line[i] == '*' || line[i] == '/') ok = false;
                    else if (isdigit(lst)) ok = false;
                    else {
                        sign[1] *= (line[i] == '+' ? 1 : -1);
                        lst = line[i];
                    }
                }
            }
        }
    }
    A *= sign[0]; B *= sign[1];
    ok &= haveFirst; ok &= haveSecond;
    return ok;
}

void outputFile(int A, int B, char op, std::ofstream& out) {
    if (op == '+') {
        out << A + B << '\n';
        return;
    }
    if (op == '-') {
        out << A - B << '\n';
        return;
    }
    if (op == '*') {
        out << A * B << '\n';
        return;
    }
    if (op == '/') {
        if (B == 0) out << "Divided by zero\n";
        else out << A / B << '\n';
        return;
    }
}
