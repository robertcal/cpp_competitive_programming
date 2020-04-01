#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

struct edge {
    int to, cost;
};

int n;
vector<vector<edge>> g;
vector<int> d;

//ダイクストラ法
void dijkstra(int s) {
    for (int i = 0; i < n; ++i) {
        d[i] = INF;
    }

    //最小値を取り出す優先度付きキュー
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;

    d[s] = 0;
    que.push(make_pair(0, s)); //距離を最初にして、優先度付きキューで最小値を出せるようにする

    while (!que.empty()) {
        pair<int, int> p = que.top(); que.pop();
        int v = p.second;

        //記録してある最短距離よりも取り出した要素に入っている距離情報が大きい場合は打ち切り
        if (d[v] < p.first) continue;

        for (int i = 0; i < g[v].size(); ++i) {
            edge e = g[v][i];

            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(make_pair(d[e.to], e.to));
            }
        }
    }
}

int main() {

    int x, y; cin >> n >> x >> y;
    --x; --y;

    g.resize(n);
    d.resize(n);

    for (int i = 0; i < n-1; ++i) {
        g[i].push_back(edge({i+1, 1}));
        g[i+1].push_back(edge({i, 1}));
    }

    g[x].push_back(edge({y, 1}));
    g[y].push_back(edge({x, 1}));

    vector<int> ans(n, 0);
    for (int i = 0; i < n; ++i) {
        dijkstra(i);

        for (int j = 0; j < n; ++j) {
            ans[d[j]]++;
        }
    }

    for (int i = 0; i < n; ++i) {
        ans[i] /= 2;
    }

    for (int i = 1; i <= n-1; ++i) {
        cout << ans[i] << endl;
    }
}