#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m, c; cin >> n >> m >> c;

    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        int sum = 0;

        for (int j = 0; j < m; ++j) {
            int a; cin >> a;
            sum += a * b[j];
        }

        sum += c;

        if (sum > 0) {
            ++ans;
        }
    }

    cout << ans << endl;
}