// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805277847568384
#include <iostream>

using namespace std;

int main() {
    int n, a1, a2, a3 = 0, b1, b2, b3 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
        if (a1 + b1 == a2 && a1 + b1 == b2) continue;
        if (a1 + b1 == a2) b3++;
        if (a1 + b1 == b2) a3++;
    }
    printf("%d %d\n", a3, b3);
    return 0;
}
