#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, r; cin >> n >> r;
    string s; cin >> s;

    //既に全部塗られている場合のみ最初にreturnしておく
    bool flag = true;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '.') flag = false;
    }

    if (flag) {
        cout << 0 << endl;
        return 0;
    }

    int r_pos = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '.') r_pos = i;
    }

    //歩く距離
    int walk = max(0, r_pos - r + 1);

    int paint = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '.') {
            for (int j = 0; j < r; ++j) {
                s[min(i + j, n - 1)] = 'o';
            }
            paint++;
        }
    }

    cout << walk + paint << endl;
}