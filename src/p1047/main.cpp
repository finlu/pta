// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805277163896832
#include <iostream>

using namespace std;

int main() {
    int n, a, b, c, map[1001] = {-1}, mi = 0, ms = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d-%d %d", &a, &b, &c);
        if (map[a] == -1) map[a] = 0;
        map[a] += c;
    }
    for (int i = 0; i < 1001; i++) {
        if (map[i] >= ms) {
            ms = map[i];
            mi = i;
        }
    }
    printf("%d %d\n", mi, ms);
    return 0;
}
