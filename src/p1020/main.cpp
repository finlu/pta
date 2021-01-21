#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>


using namespace std;

bool debug = true;

struct node {
	// 这里storeCount也必须使用double类型存储，如果使用int，则平台有一个测试用例无法通过
	double storeCount;
	double allPrice;
};

bool cmp(struct node a, struct node b) {
	return a.allPrice * b.storeCount > b.allPrice * a.storeCount;
}

int main() {
	int N;
	// D需要使用dobule类型，如果使用int类型则通过不了
	double D;
	double total=0.0;
	cin >> N >> D;
	vector<node> nodes(N);
	for (int i = 0; i < N; i++) {
		cin >> nodes[i].storeCount;
	}
	for (int i = 0; i < N; i++) {
		cin >> nodes[i].allPrice;
	}
	if (debug) {
		cout << "input data" << endl;
		for (int i = 0; i < N; i++) {
			cout << nodes[i].storeCount << "\t" << nodes[i].allPrice << "\t" << endl;
		}
	}

	sort(nodes.begin(), nodes.end(), cmp);
	
	if (debug) {
		cout << "input data after sort" << endl;
		for (int i = 0; i < N; i++) {
			cout << nodes[i].storeCount << "\t" << nodes[i].allPrice << "\t" << endl;
		}	
	}
	
	for (int i = 0; D > 0 && i < N; i++) {
		int sell = min(D, nodes[i].storeCount);
		total += nodes[i].allPrice * (sell * 1.0 / nodes[i].storeCount);
		D -= sell;
	}
//	cout << setiosflags(ios::fixed) << setprecision(2) << total << endl;
printf("%.2f\n", total);
	return 0;
}

