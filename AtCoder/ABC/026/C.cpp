#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;


vector<vector<int>> t(20);
vector<int> k(20, 0);

void dfs(int s) {
    if (t[s].size() == 0) {
        k[s] = 1;
        return;
    }

    int ma = 0;
    int mi = INF;

    for (auto p : t[s]) {
        if (k[p] == 0) {
            dfs(p);
        }

        ma = max(ma, k[p]);
        mi = min(mi, k[p]);
    }

    k[s] = ma + mi + 1;
}

int main() {

    int n; cin >> n;

    for (int i = 0; i < n-1; ++i) {
        int b; cin >> b;
        --b;

        t[b].push_back(i+1);
    }

    dfs(0);

    cout << k[0] << endl;
}