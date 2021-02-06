// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805302786899968
#include <iostream>
using namespace std;


void print(char *nums, int n, bool hh);
void sort(char *nums, int n);
int getMaxNum(char *nums, int n);
int getMinNum(char *nums, int n);
void intToCharArray(char* nums, int res, int n);


//bool debug = true;
bool debug = false;


int main(int argc, char *argv[]) {
    int n;
	char maxNumArr[4], minNumArr[4];
	int maxNum, minNum, res = 0;
	scanf("%d", &n);
    char nums[4] = {(n / 1000) + '0', (n % 1000 / 100) + '0', (n % 100 / 10) + '0', (n % 10) + '0'};
	bool flag = true;
	for (int i = 0; i < 3; i++) {
		if (nums[i] != nums[i + 1]) {
			flag = false;
			break;
		}
	}
	if (flag) {
		printf("%s - %s = 0000\n", nums, nums);
		return 0;
	}
	do {
		sort(nums, 4);
		maxNum = getMaxNum(nums, 4);
		minNum = getMinNum(nums, 4);
		res = maxNum - minNum;
		intToCharArray(maxNumArr, maxNum, 4);
		intToCharArray(minNumArr, minNum, 4);
		intToCharArray(nums, res, 4);
		print(maxNumArr, 4, false);
		printf(" - ");
		print(minNumArr, 4, false);
		printf(" = ");
		print(nums, 4, true);
	} while (res != 6174);
	return 0;
}


void print(char *nums, int n, bool hh) {
	for (int i = 0; i < n; i++) {
		printf("%c", nums[i]);
	}
	if (hh) {
		printf("\n");
	}
}


void sort(char *nums, int n) {
	for (int i = 0; i < n - 1; i++) {
		bool isSorted = true;
		for (int j = 0; j < n - i - 1; j++) {
			if (nums[j] > nums[j + 1]) {
				isSorted = false;
				char temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
		if (isSorted) break;
	}
}


int getMaxNum(char *nums, int n) {
	int res = 0;
	for (int i = n - 1; i >= 0; i--) {
		res = (nums[i] - '0') + res * 10;
	}
	return res;
}


int getMinNum(char *nums, int n) {
	int res = 0;
	for (int i = 0; i < n; i++) {
		res = (nums[i] - '0') + res * 10;
		if (debug) {
			printf("i=%d--(nums[i]-'0')=%d--res=%d\n", i, (nums[i] - '0'), res);
		}
	}
	return res;
}


void intToCharArray(char *nums, int res, int n) {
	nums[0] ='0';
	nums[1] ='0';
	nums[2] ='0';
	nums[3] ='0';
	for (int i = n - 1; i >= 0; i--) {
		int num = res % 10;
		nums[i] = num + '0';
		if (debug) {
			printf("num=%d, res=%d, nums[%d]=%c\n", num, res, i, nums[i]);
		}
		res /= 10;
	}
}
