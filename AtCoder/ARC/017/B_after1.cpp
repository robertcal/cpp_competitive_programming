#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (k == 1) {
        cout << n << endl;
        return 0;
    }

    int ans = 0;
    int before = a[0];
    int cnt = 1;

    for (int i = 1; i < n; ++i) {
        if (before < a[i]) {
            cnt++;
        } else {
            cnt = 1;
        }

        if (cnt >= k) {
            ans++;
        }

        before = a[i];
    }

    cout << ans << endl;
}