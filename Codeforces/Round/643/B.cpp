#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        int n; cin >> n;

        map<int, int> mp;
        for (int j = 0; j < n; ++j) {
            int k; cin >> k;
            mp[k]++;
        }

        int ans = 0;
        int camp = 0;
        for (auto tmp : mp) {
            ans += tmp.second / tmp.first;
            camp += tmp.second % tmp.first;
            if (camp >= tmp.first) {
                ans += camp / tmp.first;
                camp %= tmp.first;
            }
        }

        cout << ans << endl;
    }
}