#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


class Node {
public:
	int address;
	int data;
	int next;

	Node() {};

	Node(int address, int data, int next) {
		this->address = address;
		this->data = data;
		this->next = next;
	}

	void print() {
		printf("%05d", address);
		cout << ' ' << data << ' ';
		if (next == -1) {
			printf("%d\n", next);
		} else {
			printf("%05d\n", next);
		}
	}
};


int main() {
	int n, k, head;
	cin >> head >> n >> k;

	int address, data, next;
	map<int, Node> nodes;
	for (int i = 0; i < n; i++) {
		cin >> address >> data >> next;
		nodes[address] = Node(address, data, next);
	}

	// 获取节点地址的顺序并重新统计节点个数，去除无效节点
	int *addressArr = new int[n];
	addressArr[0] = head;
	address = nodes[head].next;
	int nodeCount = 1;
	while (address != -1) {
		addressArr[nodeCount] = address;
		nodeCount++;
		address = nodes[address].next;
	}

	n = nodeCount;

	// 将节点地址的顺序进行反转
	if (k > 1) {
		int *p = addressArr;
		while ((addressArr + n) - p >= k) {
			reverse(p, p + k);
			p += k;
		}
	}

	// 更新各个节点的next
	for (int i = 0; i < n - 1; i++) {
		nodes[addressArr[i]].next = addressArr[i + 1];
	}
	nodes[addressArr[n - 1]].next = -1;

	// 输出反转后的链表
	for (int i = 0; i < n; i++) {
		nodes[addressArr[i]].print();
	}

	// 释放内存空间
	delete[] addressArr;

	return 0;
}
