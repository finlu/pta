// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805283241443328
#include <iostream>

using namespace std;


int main() {
	int arr[256] = {0};
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++) arr[a[i]]++;
	int result = 0;
	for (int i = 0; i < b.length(); i++) {
		if (arr[b[i]] > 0) arr[b[i]]--;
		else result++;
	}
	if (result != 0) printf("No %d\n", result);
	else printf("Yes %d\n", (int) (a.length() - b.length()));
	return 0;
}
