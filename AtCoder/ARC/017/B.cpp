#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;

    vector<int> s(n + 10, 0);
    int before = 0;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (before < a) {
            s[i+1] = s[i] + 1;
        } else {
            s[i+1] = s[i];
        }

        before = a;
    }

    ll ans = 0;

    if (k == 1) {
        cout << n << endl;
        return 0;
    }

    for (int i = 0; i + k <= n + 1; ++i) {
        if (s[i + k] - s[i + 1] == k - 1) ++ans;
    }

    cout << ans << endl;
}