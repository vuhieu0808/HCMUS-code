#include <fstream>
#include <cstring>
#include <algorithm>
#include "process.h"

int main(void) {
    std::ifstream inp("OPERATION.TXT");
    std::ofstream out("RESULT.TXT");
    std::string line;
    while (getline(inp, line)) {
        bool ok = true;
        int A = 0, B = 0;
        char op = '?';
        ok &= check(line, A, B, op);
        if (!ok) {
            out << "Error\n";
            continue;
        }
        outputFile(A, B, op, out);
    }
    inp.close(); out.close();
    return 0;
}