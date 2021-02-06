// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805288530460672
#include <iostream>
#include <cctype>

using namespace std;

int main() {
	string s1, s2;
	// 不能使用cin进行读入
	// cin >> s1 >> s2;
	getline(cin, s1);
	getline(cin, s2);
	for (int i = 0, length = s2.length(); i < length; i++) {
		if (s1.find(toupper(s2[i])) != string::npos) continue;
		if (isupper(s2[i]) && s1.find('+') != string::npos) continue;
		cout << s2[i];
	}
	cout << endl;
	return 0;
}
