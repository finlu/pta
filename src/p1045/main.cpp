// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805278589960192
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m = 0, flag, count = 0;
    cin >> n;
    int a[n], b[n], v[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    // 排序的目的: 主元在排序中和排序后的位置一样
    sort(b, b + n);
    
    // 以第i个元素作为主元
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i] && a[i] > m) v[count++] = a[i];
        if (a[i] > m) m = a[i];
    }
    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        if (i != 0) printf(" ");
        printf("%d", v[i]);
    }
    printf("\n");
    return 0;
}
