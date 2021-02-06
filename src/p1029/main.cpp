// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805292322111488
#include <iostream>
#include <string>
using namespace std;


int main() {
	string s1, s2;
	int l1, l2;
	bool flag[256] = {false};
	cin >> s1 >> s2;
	l1 = s1.length();
	l2 = s2.length();
	for (int i = 0; i < l2; i++) {
		s2[i] = towupper(s2[i]);
		flag[s2[i]] = true;
	}


	for (int i = 0; i < l1; i++) {
		s1[i] = towupper(s1[i]);
		if (flag[s1[i]] == false) cout << s1[i]; 
		flag[s1[i]] = true;
	}
	cout << endl;
	return 0;
}
