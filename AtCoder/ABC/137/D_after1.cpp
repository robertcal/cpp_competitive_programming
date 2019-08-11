#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int n, m; cin >> n >> m;

    vector<vector<int>> jobs(m);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        if (a > m) continue;

        jobs[m-a].push_back(b); //ある日付までにやらないといけない仕事
    }

    priority_queue<int> q; //要素が大きい順で並ぶ

    ll ans = 0;

    for (int i = m-1; i >= 0; --i) {
        for (int b : jobs[i]) {
            q.push(b); //ある日付までにやらないといけない仕事をキューに格納
        }

        if (!q.empty()) {
            ans += q.top();
            q.pop();
        }
    }

    cout << ans << endl;
}