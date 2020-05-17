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
int m;
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

    cin >> n >> m;

    g.resize(n);
    d.resize(n);

    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        --a; --b;

        g[a].push_back(edge({b, 1}));
        g[b].push_back(edge({a, 1}));
    }

    dijkstra(0);

    for (int i = 0; i < n; ++i) {
        if (d[i] == INF) {
            puts("No");
            return 0;
        }
    }

    cout << "Yes" << endl;

    vector<int> t(n, 0);
    for (int i = 1; i < n; ++i) {
        t[d[i]] = i;
    }

    for (int i = 1; i < n; ++i) {
        cout << t[d[i] - 1] + 1 << endl;
    }
}