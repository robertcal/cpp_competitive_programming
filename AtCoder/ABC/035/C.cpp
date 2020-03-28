#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int t[200010] = {};

int main() {

    int n, q; cin >> n >> q;

    for (int i = 0; i < q; ++i) {
        int l, r; cin >> l >> r;
        --l; --r;

        t[l]++;
        t[r+1]--; //半開区間で考える
    }

    for (int i = 1; i < 200010; ++i) {
        t[i] += t[i-1];
    }

    for (int i = 0; i < n; ++i) {
        if (t[i] % 2 == 0) {
            cout << 0;
        } else {
            cout << 1;
        }
    }

    cout << endl;
}