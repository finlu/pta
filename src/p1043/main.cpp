// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805280074743808
#include <iostream>

using namespace std;

int main() {
    int map[128] = {0}, c;
    // 逐个读取字符
    while ((c = cin.get()) != EOF) map[c]++;
    while (map['P'] > 0 || map['A'] > 0 || map['T'] > 0 || map['e'] > 0 || map['s'] > 0 || map['t'] > 0) {
        if (map['P']-- > 0) cout << 'P';
        if (map['A']-- > 0) cout << 'A';
        if (map['T']-- > 0) cout << 'T';
        if (map['e']-- > 0) cout << 'e';
        if (map['s']-- > 0) cout << 's';
        if (map['t']-- > 0) cout << 't';
    }
    cout << endl;
    return 0;
}
