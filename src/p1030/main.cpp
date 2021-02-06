// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805291311284224
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
	int n, p, m=0;
	cin >> n >> p;
	// 如果使用int会导致第5个测试点无法通过
	double nums[n];
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	sort(nums, nums + n);
	for (int i = 0; i < n; i++) {
		for (int j = i + m; j < n; j++) {
			if (nums[i] * p < nums[j]) break;
			m++;
		}
	}
	printf("%d\n", m);
	return 0;
}
