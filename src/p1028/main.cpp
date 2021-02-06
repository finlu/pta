// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805293282607104
#include <iostream>

using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;
	string name, birth, maxName, minName, maxBirth = "1814/09/06", minBirth = "2014/09/06";
	for (int i = 0; i < n; i++) {
		cin >> name >> birth;
		if (birth >= "1814/09/06" && birth <= "2014/09/06") {
			cnt++;
			if (birth >= maxBirth) {
				maxBirth = birth;
				maxName = name;
			}
			if (birth <= minBirth) {
				minBirth = birth;
				minName = name;
			}
		}
	}
	cout << cnt;
	if (cnt != 0) cout << " " << minName << " " << maxName << endl;
	return 0;
}
