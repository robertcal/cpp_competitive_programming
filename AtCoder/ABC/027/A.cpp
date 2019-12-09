#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int c[20] = {};

    int l1, l2, l3; cin >> l1 >> l2 >> l3;

    ++c[l1];
    ++c[l2];
    ++c[l3];

    for (int i = 0; i < 20; ++i) {
        if (c[i] == 1 || c[i] == 3) {
            cout << i << endl;
            return 0;
        }
    }
}