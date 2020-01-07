#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    vector<int> g(n+1, 0);
    for (int i = 0; i < m; ++i) {
        int l, r; cin >> l >> r;
        --l; //0-indexのため
        g[l]++;
        g[r]--;
    }

    //いもす法
    for (int i = 0; i < n; ++i) {
        g[i+1] += g[i];
    }

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        if (g[i] == m) {
            ++ans;
        }
    }

    cout << ans << endl;
}