#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    //累積のmax
    vector<int> l(n);
    vector<int> r(n);

    l[0] = a[0];
    r[n-1] = a[n-1];

    for (int i = 1; i < n; ++i) {
        l[i] = max(l[i-1], a[i]);
    }

    for (int i = n-2; i > 0; --i) {
        r[i] = max(r[i+1], a[i]);
    }

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cout << r[1] << endl;
            continue;
        }

        if (i == n-1) {
            cout << l[n-2] << endl;
            continue;
        }

        cout << max(l[i-1], r[i+1]) << endl;
    }
}