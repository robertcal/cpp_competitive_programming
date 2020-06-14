#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int x, n; cin >> x >> n;
    vector<int> cnt(n + 10, 0);
    for (int i = 0; i < n; ++i) {
        int p; cin >> p;
        cnt[p]++;
    }

    int ans = -1;
    int ab = INF;
    for (int i = -100; i <= 200; ++i) {
        if (cnt[i] == 0) {
            int t = abs(x - i);
            if (t < ab) {
                ans = i;
                ab = t;
            }
        }
    }

    cout << ans << endl;
}