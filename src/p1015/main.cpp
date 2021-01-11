#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct node {
	int num, dScore, cScore;
};

int cmp(struct node a, struct node b) {
	if ((a.dScore + a.cScore) != (b.dScore + b.cScore)) {
		return (a.dScore + a.cScore) > (b.dScore + b.cScore);
	} else if (a.dScore != b.dScore) {
		return a.dScore > b.dScore;
	} else {
		return a.num < b.num;
	}
}


int main() {
	int N, L, H;
	scanf("%d %d %d", &N, &L, &H);
	vector<node> v[4];
	node temp;
	int total = N;
	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &temp.num, &temp.dScore, &temp.cScore);
		if (temp.dScore < L || temp.cScore < L) {
			total--;
		} else if (temp.dScore >= H && temp.cScore >= H) {
			v[0].push_back(temp);
		} else if (temp.dScore >=H && temp.cScore < H) {
			v[1].push_back(temp);
		} else if (temp.dScore < H && temp.cScore < H && temp.dScore >= temp.cScore) {
			v[2].push_back(temp);
		} else {
			v[3].push_back(temp);
		}
	}

	printf("%d\n", total);
	for(int i = 0; i < 4; i++) {
		sort(v[i].begin(), v[i].end(), cmp);
		for(int j = 0; j < v[i].size(); j++) {
			printf("%d %d %d\n", v[i][j].num, v[i][j].dScore, v[i][j].cScore);
		}
	}
	return 0;
}
