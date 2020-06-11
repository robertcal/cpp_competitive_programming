#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, q; cin >> n >> q;

    vector<stack<int>> vs(n);
    for (int i = 0; i < n; ++i) {
        vs[i].emplace(i);
    }

    for (int i = 0; i < q; ++i) {
        int f, t, x; cin >> f >> t >> x;
        --f; --t; --x;

        vector<int> tmp;
        while (true) {
            int p = vs[f].top(); vs[f].pop();
            tmp.push_back(p);
            if (p == x) {
                break;
            }
        }

        for (int j = tmp.size() - 1; j >= 0; --j) {
            vs[t].emplace(tmp[j]);
        }
    }

    vector<int> ans(n, -1);

    for (int i = 0; i < n; ++i) {
        while (!vs[i].empty()) {
            int p = vs[i].top(); vs[i].pop();

            ans[p] = i + 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << endl;
    }
}