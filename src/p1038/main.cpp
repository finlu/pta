// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805284092887040
#include <iostream>

using namespace std;


int main() {
	int n, m, temp;
	scanf("%d", &n);
	int a[101] = {0};
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		a[temp]++;
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &temp);
		if (i != 0) printf(" ");
		printf("%d", a[temp]);
	}
	printf("\n");
	return 0;
}
