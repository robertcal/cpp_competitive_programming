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
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            int dist = abs(i - j);
            dist = min(dist, abs(i - x) + 1 + abs(j - y));
            dist = min(dist, abs(i - y) + 1 + abs(j - x));

            ans[dist]++;
        }
    }

    for (int i = 1; i < n; ++i) {
        cout << ans[i] << endl;
    }
}