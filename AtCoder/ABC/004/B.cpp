#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string c[4][4];

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> c[i][j];
        }
    }

    for (int i = 3; i >= 0; --i) {
        for (int j = 3; j >= 0; --j) {
            cout << c[i][j] << ' ';
        }

        cout << endl;
    }
}