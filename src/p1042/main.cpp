// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805280817135616
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int a[26] = {0};
    // 将字母转换为小写
    for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
    // 统计每个小写字母的个数
    for (int i = 0; i < s.length(); i++) 
        if (islower(s[i])) a[s[i] - 'a']++;
    // 查找出现次数最多的小写字母
    int max = a[0], t = 0;
    for (int i = 0; i < 26; i++) {
        if (a[i] > max) {
            max = a[i];
            t = i;
        }
    }
    printf("%c %d", 'a' + t, max);
    return 0;
}
