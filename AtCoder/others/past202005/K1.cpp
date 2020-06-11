#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, q; cin >> n >> q;
    vector<vector<int>> v(n);

    for (int i = 0; i < n; ++i) {
        v[i].push_back(i);
    }

    for (int i = 0; i < q; ++i) {
        int f, t, x; cin >> f >> t >> x;
        --f; --t; --x;

        auto result = find(v[f].begin(), v[f].end(), x);

        vector<int> tmp;
        tmp.insert(tmp.end(), result, v[f].end());
        v[f].erase(result, v[f].end());

        v[t].insert(v[t].end(), tmp.begin(), tmp.end());
    }

    vector<int> ans(n, -1);

    for (int i = 0; i < n; ++i) {
        for (auto p : v[i]) {
            ans[p] = i + 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << endl;
    }
}