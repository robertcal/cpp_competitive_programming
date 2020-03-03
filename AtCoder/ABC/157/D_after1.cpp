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

    int n, m, k; cin >> n >> m >> k;

    UnionFind uf(n);

    vector<vector<int>> fre(n);
    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        --a; --b;

        fre[a].push_back(b);
        fre[b].push_back(a);

        uf.unite(a, b);
    }

    vector<vector<int>> blo(n);
    for (int i = 0; i < k; ++i) {
        int c, d; cin >> c >> d;
        --c; --d;

        blo[c].push_back(d);
        blo[d].push_back(c);
    }

    for (int i = 0; i < n; ++i) {
        int res = uf.size(i) - 1; //自分自身を引く

        for (auto t : fre[i]) {
            if (uf.same(i, t)) --res;
        }

        for (auto t : blo[i]) {
            if (uf.same(i, t)) --res;
        }

        cout << res << ' ';
    }

    cout << endl;
}