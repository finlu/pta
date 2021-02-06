// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805305181847552
#include <iostream>
#include <string>
using namespace std;

int main() {
	string A;
	int B;
	cin >> A >> B;
	int C[A.size()];
	int pre = 0;
	for (int i = 0; i < A.size(); i++) {
		int n = A.at(i) - '0' + pre * 10;
		C[i] = n / B;
		pre = n % B;
	}

	bool flag = false;
	for (int i = 0; i < A.size(); i++) {
		if (C[i] != 0) {
			flag = true;
		}
		if (flag) {
			printf("%d", C[i]);
		}
	}
	if (!flag) {
		printf("0");
	}
	printf(" %d\n", pre);
	return 0;
}
