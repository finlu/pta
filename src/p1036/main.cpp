// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805285812551680
#include <iostream>

using namespace std;

int main() {
	int n, m;
	char c;
	cin >> n >> c;
	m = n / 2.0 + 0.5 - 2;
	// 输出上边
	for (int i = 0; i < n; i++) printf("%c", c);
	printf("\n");

	for (int i = 0; i < m; i++) {
		printf("%c", c);
		for (int j = 0; j < n - 2; j++) {
			printf(" ");
		}
		printf("%c\n", c);
	}
	
	// 输出下边
	for (int i = 0; i < n; i++) printf("%c", c);
	printf("\n");
	return 0;
}
