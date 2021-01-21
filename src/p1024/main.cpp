#include <iostream>
using namespace std;

bool debug = false;

int main() {
	string input;
	cin >> input;
	unsigned int eIndex = input.find("E", 0);
	string nStr = input.substr(1, eIndex - 1);
	string eStr = input.substr(eIndex + 2, input.size() - eIndex - 1);
	if (debug) cout << "nStr=" + nStr << endl << "eStr=" << eStr << endl;
	// 指数部分数绝对值
	int e = stoi(input.substr(eIndex + 2, input.size() - 1));
	if (debug) cout << "e=" << e << endl;
	if (input.at(0) == '-') {
		cout << '-';
	}
	if (input.at(eIndex + 1) == '+') {
		if (e == 0) {
			cout << nStr << endl;
			return 0;
		} else if (e > 0 && e < nStr.size() - 2) {
			cout << nStr.substr(0, 1) << nStr.substr(2, e) << '.' << nStr.substr(2 + e) << endl;
			return 0;
		} else if (e >= nStr.size() - 2) {
			cout << nStr.substr(0, 1) << nStr.substr(2);
			for (int i = 0; i < e - nStr.size() + 2; i++) {
				cout << '0';
			}
			cout << endl;
			return 0;
		}
	} else if (input.at(eIndex + 1) == '-') {
		if (e == 0) {
			cout << nStr << endl;
			return 0;
		} else if (e > 0) {
			for (int i = 0; i < e; i++) {
				cout << '0';
				if (i == 0) {
					cout << '.';
				}
			}
			cout << nStr.substr(0, 1) << nStr.substr(2) << endl;
			return 0;
		}
	} else {
		cout << "input error" << endl;
	}

	return 0;
}
