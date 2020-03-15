#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int n, k;
vector<vector<int>> t;
bool flag = false;

void dfs(int cnt, int xo) {
    if (cnt == n) {
        if (xo == 0) flag = true;
        return;
    }

    for (auto tmp : t[cnt]) {
        dfs(cnt+1, xo^tmp);
    }
}

int main() {

    cin >> n >> k;
    
    t.resize(n, vector<int>(k));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            cin >> t[i][j];
        }
    }

    dfs(0, 0);

    if (flag) {
        puts("Found");
    } else {
        puts("Nothing");
    }
}