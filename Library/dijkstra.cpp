#include <bits/stdc++.h>

using namespace std;
const int INF = 1e9;

struct edge {
    int to, cost;
};

vector<vector<edge>> g;
vector<int> dist;
vector<int> pre;

//ダイクストラ法
void dijkstra(int n, int s) {
    dist.resize(n, INF);
    pre.resize(n, -1);

    //最小値を取り出す優先度付きキュー
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;

    dist[s] = 0;
    que.push(make_pair(0, s)); //距離を最初にして、優先度付きキューで最小値を出せるようにする

    while (!que.empty()) {
        pair<int, int> p = que.top(); que.pop();
        int v = p.second;

        //記録してある最短距離よりも取り出した要素に入っている距離情報が大きい場合は打ち切り
        if (dist[v] < p.first) continue;

        for (int i = 0; i < (int)g[v].size(); ++i) {
            edge e = g[v][i];

            if (dist[e.to] > dist[v] + e.cost) {
                dist[e.to] = dist[v] + e.cost;
                pre[e.to] = v; //頂点vを通って、e.toにたどり着いた
                que.push(make_pair(dist[e.to], e.to));
            }
        }
    }
}