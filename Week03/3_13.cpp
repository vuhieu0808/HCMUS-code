#include <stdio.h>
#include <algorithm>
#include <vector>

#define MAX 10000

int main(void) {
    char line[MAX];
    int N;
    do {
        printf("Enter N = ");
        fgets(line, MAX, stdin);
    } while (sscanf(line, "%d", &N) != 1 || N < 0);
    std::vector<int> vec;
    while (N) {
        vec.push_back(N % 10); N /= 10;
    }
    bool flag = true;
    for (int i = 1; i < (int) vec.size(); ++i) if (vec[i - 1] < vec[i]) {
        flag = false;
        break;
    }
    if (flag) printf("Descending.\n");
    else printf("Not descending.\n");
    std::vector<int> revVec = vec;
    std::reverse(revVec.begin(), revVec.end());

    if (vec == revVec) printf("Symmetric.\n");
    else printf("Not symmetric.\n");

    return 0;
}