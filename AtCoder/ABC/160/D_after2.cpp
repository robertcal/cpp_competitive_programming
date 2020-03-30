#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, x, y; cin >> n >> x >> y;
    --x; --y;

    vector<int> ans(n);

    for (int sv = 0; sv < n; ++sv) { //全点から調べる
        vector<int> dist(n, INF);
        queue<int> q;

        auto push = [&](int v, int d) {
            if (dist[v] != INF) return; //既に調べた点だったら
            dist[v] = d;
            q.push(v);
        };

        push(sv, 0);

        while (!q.empty()) {
            int v = q.front(); q.pop();

            int d = dist[v];
            //頂点iとi+1のつながりでの探索
            if (v-1 >= 0) push(v-1, d+1);
            if (v+1 < n) push(v+1, d+1);

            //xとｙのつながりでの探索
            if (v == x) push(y, d+1);
            if (v == y) push(x, d+1);
        }

        for (int i = 0; i < n; ++i) {
            //距離の数を集計
            ans[dist[i]]++;
        }
    }

    for (int i = 0; i < n; ++i) {
        ans[i] /= 2; //(i, j)と(j, i)をダブルでカウントしているため
    }

    for (int i = 1; i <= n-1; ++i) {
        cout << ans[i] << endl;
    }
}