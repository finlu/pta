// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805304020025344 
#include <iostream>
using namespace std;

// 判断p1 和 p2 哪个可以获胜（p1获胜返回1，p2获胜返回-1，相同返回0）
int rule(char p1, char p2);

// 根据c,j,b的大小返回对应的字符
char maxWin(int c, int j, int b);


int main() {
	int n;
	char j, y;
	int jw = 0, jp = 0, jl = 0;
	int cj = 0, jj = 0, bj = 0;
	int cy = 0, jy = 0, by = 0;
	cin >> n;
	while (n > 0) {
	    n--;
		cin >> j >> y;
		int r = rule(j, y);
		switch (r) {
			case 1:
				switch (j) {
					case 'C':
						cj++;
						break;
					case 'J':
						jj++;
						break;
					case 'B':
						bj++;
						break;
				}
				jw++;
				break;
			case 0:
				jp++;
				break;
			case -1:
				switch (y) {
					case 'C':
						cy++;
						break;
					case 'J':
						jy++;
						break;
					case 'B':
						by++;
						break;
				}
				jl++;
				break;
		}
	}
	printf("%d %d %d\n", jw, jp, jl);
	printf("%d %d %d\n", jl, jp, jw);
	printf("%c %c\n", maxWin(cj, jj, bj), maxWin(cy, jy, by));
	return 0;
}



int rule(char p1, char p2) {
	switch (p1) {
		case 'C':
			switch (p2) {
				case 'C':
					return 0;
				case 'J':
					return 1;
				case 'B':
					return -1;
			}
		case 'J':
			switch (p2) {
				case 'C':
					return -1;
				case 'J':
					return 0;
				case 'B':
					return 1;
			}
		case 'B':
			switch (p2) {
				case 'C':
					return 1;
				case 'J':
					return -1;
				case 'B':
					return 0;
			}
	}
	return -2;
}


char maxWin(int c, int j, int b) {
	if (c > j) {
		if (c >= b) {
			return 'C';
		} else {
			return 'B';
		}
	} else if (c == j) {
		if (c > b) {
			return 'C';
		} else {
			return 'B';
		}
	} else {
		// c < j
		if (j <= b) {
			return 'B';
		} else {
			return 'J';
		}
	}
}
