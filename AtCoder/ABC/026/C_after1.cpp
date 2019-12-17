#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

vector<vector<int>> t(25);

int dfs(int p) {
    if (t[p].size() == 0) {
        return 1;
    }

    int ma = 0;
    int mi = INF;

    for (auto v : t[p]) {
        ma = max(ma, dfs(v));
        mi = min(mi, dfs(v));
    }

    return ma + mi + 1;
}

int main() {

    int n; cin >> n;

    for (int i = 0; i < n-1; ++i) {
        int b; cin >> b;
        --b;

        t[b].push_back(i+1);
    }

    cout << dfs(0) << endl;
    return 0;
}