#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

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
    int n, q; cin >> n >> q;

    UnionFind tree(n);

    for (int i = 0; i < q; ++i) {
        int p, x, y; cin >> p >> x >> y;

        if (p == 0) {
            //連結クエリ
            tree.unite(x, y);
        } else {
            //判定クエリ
            if (tree.same(x, y)) {
                puts("Yes");
            } else {
                puts("No");
            }
        }
    }

    return 0;
}