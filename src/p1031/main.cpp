#include <iostream>
#include <vector>


using namespace std;

int get_w(int i) {
    switch (i) {
        case 0:
            return 7;
        case 1:
            return 9;
        case 2:
            return 10;
        case 3:
            return 5;
        case 4:
            return 8;
        case 5:
            return 4;
        case 6:
            return 2;
        case 7:
            return 1;
        case 8:
            return 6;
        case 9:
            return 3;
        case 10:
            return 7;
        case 11:
            return 9;
        case 12:
            return 10;
        case 13:
            return 5;
        case 14:
            return 8;
        case 15:
            return 4;
        case 16:
            return 2;
        default:
            cout << "error" << endl;
            exit(-1);
    };
}

char get_x(int z) {
    switch (z) {
        case 0:
            return '1';
        case 1:
            return '0';
        case 2:
            return 'X';
        case 3:
            return '9';
        case 4:
            return '8';
        case 5:
            return '7';
        case 6:
            return '6';
        case 7:
            return '5';
        case 8:
            return '4';
        case 9:
            return '3';
        case 10:
            return '2';
        default:
            cout << "error" << endl;
            exit(-1);
    }
}


int main() {
    int n, s;
    string str;
    // 前17位是否有效的
    bool flag;
    scanf("%d", &n);
    vector<string> strs;
    for (int i = 0; i < n; i++) {
        cin >> str;
        s = 0;
        flag = true;
        for (int j = 0; j < 17; j++) {
            // 前17位是数字
            if (str.at(j) < '0' || str.at(j) > '9') {
                flag = false;
                break;
            }
            s += get_w(j) * (str.at(j) - '0');
        }
        if (!flag || get_x(s % 11) != str.at(17)) {
            strs.push_back(str);
            continue;
        }
    }
    
    if (strs.size() == 0) {
        cout << "All passed" << endl;
    } else {
        for (int i = 0; i < strs.size(); i++) {
            cout << strs[i] << endl;
        }
    }
    return 0;
}
