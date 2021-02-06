#include <iostream>

using namespace std;


class Person {
public:
	string name;
	int year;
	int month;
	int day;

	Person(string name, int year, int month, int day) {
		this->name = name;
		this->year = year;
		this->month = month;
		this->day = day;
	}
}

int main() {
	int n, count;
	Person maxAgePerson, minAgePerson, person;
	string cname;
	int cyear, cmonth, cday;
	char c = '/';
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cname >> cyear >> c >> cmonth >> cday;
		person = Person(cname, cyear, cmonth, cday);
	}
	return 0;
}
