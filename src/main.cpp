// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805287624491008
#include <iostream>
#include <cmath>
using namespace std;

long long a, b, c, d;

// 计算t1和t2的最大公约数
long long gcd(long long t1, long long t2) {
	return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}

// 对m/n的分数进行化简
void func(long long m, long long n) {
	if (m * n == 0) {
		printf("%s", n == 0 ? "Inf" : "0");
		return;
	}
	bool flag = ((m < 0 && n > 0) || (m > 0 && n < 0));
	m = abs(m);
	n = abs(n);
	long long x = m / n;
	printf("%s", flag ? "(-" : "");
	if (x != 0) printf("%lld", x);
	if (m % n == 0) {
		if (flag) printf(")");
		return;
	}
	if (x != 0) printf(" ");
	m = m - x * n;
	long long t = gcd(m, n);
	m = m / t;
	n = n / t;
	printf("%lld/%lld%s", m, n, flag ? ")" : "");
}

int main() {

	scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
	func(a, b); printf(" + "); func(c, d); printf(" = "); func(a * d + b * c, b * d); printf("\n");
	func(a, b); printf(" - "); func(c, d); printf(" = "); func(a * d - b * c, b * d); printf("\n");
	func(a, b); printf(" * "); func(c, d); printf(" = "); func(a * c, b * d); printf("\n");
	func(a, b); printf(" / "); func(c, d); printf(" = "); func(a * d, b * c); printf("\n");
	return 0;
}

