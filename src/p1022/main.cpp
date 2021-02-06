// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805298269634560
#include <iostream>
#include <stack>

using namespace std;


int main() {
	int A, B, D, S;
	cin >> A >> B >> D;
	S = A + B;
	stack <int> nums;
	do {
		nums.push(S % D);
		S = S / D;
	} while (S != 0);

	while (!nums.empty()) {
		cout << nums.top();
		nums.pop();
	}
	cout << endl;
	return 0;
}
