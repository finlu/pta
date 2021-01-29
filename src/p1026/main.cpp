#include <iostream>
using namespace std;

#define CLK_TCK 100

int main() {
	int c1, c2, seconds, hour, minute, second;
	cin >> c1 >> c2;
	// 四舍五入处理
	seconds = (c2 - c1) * 1.0 / CLK_TCK + 0.5;

	// 计算小时、分钟、秒
	hour = seconds / 3600;
	seconds %= 3600;
	minute = seconds / 60;
	second = seconds % 60;

	printf("%02d:%02d:%02d\n", hour, minute, second);
	return 0;
}
