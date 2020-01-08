#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; ++i) {
        int t; cin >> t;

        a[i] = t;
        b[i] = t;
    }

    sort(b.rbegin(), b.rend());

    for (int i = 0; i < n; ++i) {
        if (a[i] == b[0]) {
            cout << b[1] << endl;
        } else {
            cout << b[0] << endl;
        }
    }
}