#include <iostream>
#include <map>

using namespace std;

int main() {
	int n, nu, grade, maxNu=0, maxGrade=0;
	cin >> n;
	map<int, int> grades;
	for (int i = 0; i < n; i++) {
		cin >> nu >> grade;
		if (grades.find(nu) == grades.end()) {
			grades[nu] = grade;
		} else {
			grades[nu] += grade;
		}
	}
	map<int, int>::iterator it;
	for (it = grades.begin(); it != grades.end(); ++it) {
		// cout << it->first << " " << it->second << endl;
		if (it->second >= maxGrade) {
			maxGrade = it->second;
			maxNu = it->first;
		}
	}
	printf("%d %d\n", maxNu, maxGrade);
	return 0;
}
