// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805294251491328
#include <iostream>
#include <math.h>


using namespace std;


int main() {
	// x表示上半部分或者下半部分占多少行
	int n, x;
	char c;
	cin >> n >> c;
	x = sqrt((n + 1) / 2);

	// 输出上半部分
	for (int i = x; i > 0; i--) {
		// 输出空格
		for (int j = 0; j < x - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2  * i - 1; j++) {
			printf("%c", c);
		}
		printf("\n");
	}

	// 输出下半部分
	for (int i = 2; i <= x; i++) {
		// 输出空格
		for (int j = 0; j < x - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("%c", c);
		}
		printf("\n");
	}

	// printf("n=%d, x=%d\n", n, x);
	// 输出剩余符号
	printf("%d\n", n - 2 * x * x + 1);
	return 0;
}
