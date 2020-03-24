#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }

    vector<int> l(n);
    int cnt = 0;
    l[0] = 0;
    int t = h[0];
    for (int i = 1; i < n; ++i) {
        if (h[i] > t) {
            cnt = 0;
            l[i] = cnt;
            t = h[i];
        } else {
            ++cnt;
            l[i] = cnt;
            t = h[i];
        }
    }

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        ans = max(ans, l[i]);
    }

    cout << ans << endl;
}