#include <iostream>

using namespace std;


int main() {
	int zeroCount = 0;
	int count;
	for (int i = 0; i < 10; i++) {
		cin >> count;
		if (count == 0) {
			continue;
		}
		if (i == 0) {
			zeroCount = count;
			continue;
		}
		if (zeroCount != 0) {
			cout << i;
			count--;
		}
		while (zeroCount != 0) {
			cout << '0';
			zeroCount--;
		}
		for (int j = 0; j < count; j++) {
			cout << i;
		}
	}
	cout << endl;
	return 0;
}
