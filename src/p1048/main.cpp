// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805276438282240
#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    int l1, l2, i, r, ml;
    cin >> s1 >> s2;
    l1 = s1.length();
    l2 = s2.length();
    // if (l2 < l1) cout << s1.substr(0, l1 - l2 + 1);
    // if (l1 < l2) cout << s2.substr(0, l2 - l1 + 1);
    ml = min(l1, l2);
    for (i = min(l1, l2) - 1; i >= 0; i--) {
        if ((l1 - i) % 2) {
            r = ((s1[i] - '0') + (s2[i] - '0')) % 13;
            switch (r) {
                case 10:
                    printf("%c", 'J');
                    break;
                case 11:
                    printf("%c", 'Q');
                    break;
                case 12:
                    printf("%c", 'K');
                    break;
                default:
                    printf("%d", r);
                    break;
            }
        } else {
            r = s2[i] - s1[i];
            if (r < 0) r+= 10;
            printf("%d", r);
        }
    }
    cout << endl;
}
