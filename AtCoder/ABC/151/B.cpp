#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k, m; cin >> n >> k >> m;

    int sum = 0;

    for (int i = 0; i < n-1; ++i) {
        int a; cin >> a;
        sum += a;
    }

    for (int i = 0; i <= k; ++i) {
        int ave = (sum + i) / n;

        if (ave >= m) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}