// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805286714327040
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
	int n, a[100], b[100], i, j;
	cin >> n;
	for (int k = 0; k < n; k++) cin >> a[k];
	for (int k = 0; k < n; k++) cin >> b[k];
	for (i = 0; i < n - 1 && b[i] <= b[i + 1]; i++);
	for (j = i + 1; a[j] == b[j] && j < n; j++);
	if (j == n) {
		cout << "Insertion Sort" << endl;
		sort(a, a + i + 2);
	} else {
		cout << "Merge Sort" << endl;
		int m = 1;
		bool flag = true;
		while (flag) {
			flag = false;
			for (int k = 0; k < n; k++) {
				if (a[k] != b[k]) flag = true;
			}
			m = m * 2;
			for (int k = 0; k < n / m; k++) sort(a + k * m, a + (k + 1) * m);
			sort(a + n / m * m, a + n);
		}
	}
	for (int k = 0; k < n; k++) {
		if (k != 0) printf(" ");
		printf("%d", a[k]);
	}
	cout << endl;
	return 0;
}
