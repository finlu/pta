// PAT(Basic Level) Practice
// https://pintia.cn/problem-sets/994805260223102976/problems/994805301562163200
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

bool debug = false;

struct node {
    double storeCount, allPrice, singlePrice;
};

int cmp(struct node a, struct node b) {
    return a.singlePrice > b.singlePrice;
}

int main() {
    int N, D;
    double total=0.0;
    cin >> N >> D;
    struct node nodes[N];
    for (int i = 0; i < N; i++) {
        cin >> nodes[i].storeCount;
    }
    for (int i = 0; i < N; i++) {
        cin >> nodes[i].allPrice;
        nodes[i].singlePrice = nodes[i].allPrice / nodes[i].storeCount;
    }
    if (debug) {
        cout << "input data" << endl;
        for (int i = 0; i < N; i++) {
            cout << nodes[i].storeCount << "\t" << nodes[i].allPrice << "\t" << nodes[i].singlePrice << endl;
        }
    }

    sort(nodes, nodes + N, cmp);

    if (debug) {
        cout << "input data after sort" << endl;
        for (int i = 0; i < N; i++) {
            cout << nodes[i].storeCount << "\t" << nodes[i].allPrice << "\t" << nodes[i].singlePrice << endl;
        }
    }

    for (int i = 0; i < N; i++) {
        if (D < nodes[i].storeCount) {
            total += D * nodes[i].allPrice / nodes[i].storeCount;
            if (debug) cout << "total=" << total << endl;
            break;
        } else {
            D -= nodes[i].storeCount;
            total += nodes[i].allPrice;
            if (debug) cout << "total=" << total << endl;
        }
    }
    cout << setiosflags(ios::fixed) << setprecision(2) << total << endl;

    return 0;
}


