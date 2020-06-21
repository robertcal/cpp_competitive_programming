#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;

    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    int ans = 0;
    for (int i = 0; i < k; ++i) {
        ans += p[i];
    }

    cout << ans << endl;
}