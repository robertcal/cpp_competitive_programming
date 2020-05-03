#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    vector<int> cnt(n, 0);
    vector<vector<int>> v(n);

    for (int i = 0; i < m; ++i) {
        int x, y, z; cin >> x >> y >> z;
        --x; --y;

        v[x].push_back(y);
        v[y].push_back(x);

        cnt[x]++;
        cnt[y]++;
    }


}