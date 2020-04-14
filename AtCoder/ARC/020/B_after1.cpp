#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, c; cin >> n >> c;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = INF;

    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            //奇数i、偶数jで決め打ちして最小値を求める

            if (i == j) continue;

            int cnt = 0;

            for (int k = 0; k < n; ++k) {
                if (k % 2 == 0) {
                    if (a[k] != j) cnt++;
                } else {
                    if (a[k] != i) cnt++;
                }
            }

            ans = min(ans, cnt * c);
        }
    }

    cout << ans << endl;
}