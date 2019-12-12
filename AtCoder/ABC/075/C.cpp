#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

struct UnionFind {
    vector<int> par; //親の番号

    //コンストラクタ
    UnionFind(int N) : par(N) {
        for (int i = 0; i < N; ++i) {
            par[i] = i; //初期化
        }
    }

    //木の根を求める
    int root(int x) {
        if (par[x] == x) {
            return x;
        } else {
            return par[x] = root(par[x]); //経路圧縮
        }
    }

    //xとyの属する木を併合
    void unite(int x, int y) {
        int rx = root(x);
        int ry = root(y);

        if (rx == ry) {
            //xとyの根が同じならそのまま
            return;
        }

        par[rx] = ry;
    }

    //xとyが同じ集合に属するかどうか
    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);

        return rx == ry;
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

    int ans = 0;

    for (int i = 0; i < m; ++i) {
        UnionFind tree(n);

        for (int j = 0; j < m; ++j) {
            if (j != i) {
                tree.unite(a[j], b[j]);
            }
        }

        if (!tree.same(a[i], b[i])) {
            ++ans;
        }
    }

    cout << ans << endl;
}