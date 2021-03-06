#include <bits/stdc++.h>

using namespace std;

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

