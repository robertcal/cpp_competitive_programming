#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

struct UnionFind {
    vector<int> par;

    //正の場合、親を表す
    //負の場合、根で数値は連結成分のサイズ
    UnionFind(int n) : par(n, -1) {}

    int root(int x) {
        if (par[x] < 0) {
            return x;
        } else {
            return par[x] = root(par[x]); //経路圧縮
        }
    }

    bool unite(int x, int y) {
        x = root(x); y = root(y);

        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y); //小さい方を大きい方にくっつけるため

        par[x] += par[y];
        par[y] = x;

        return true;
    }

    bool same(int x, int y) {
        return root(x) == root(y);
    }

    int size(int x) {
        return -par[root(x)];
    }
};


int main() {

    int n, m; cin >> n >> m;

    vector<int> a(m);
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> a[i] >> b[i];
        --a[i];
        --b[i];
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    vector<ll> ans;

    ll t = (ll)n * ((ll)n - 1) / 2;
    ans.push_back(t);

    UnionFind tree(n);

    for (int i = 0; i < m-1; ++i) {
        ll a_size = (ll)tree.size(a[i]);
        ll b_size = (ll)tree.size(b[i]);

        tree.unite(a[i], b[i]);

        ll size = (ll)tree.size(a[i]);

        if (t > 0 && size > a_size && size > b_size) {
            t -= size * (size - 1) / 2 - (a_size) * (a_size - 1) / 2 - (b_size) * (b_size - 1) / 2;
        }

        if (t < 0) t = 0;

        ans.push_back(t);
    }

    reverse(ans.begin(), ans.end());

    for (ll i = 0; i < ans.size(); ++i) {
        cout << ans[i] << endl;
    }
}