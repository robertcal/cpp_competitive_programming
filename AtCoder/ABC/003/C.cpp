#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;

    vector<int> r(n);
    for (int i = 0; i < n; ++i) {
        cin >> r[i];
    }

    sort(r.begin(), r.end());
    
    double ans = 0;

    for (int i = n-k; i < n; ++i) {
        ans = (ans + (double)r[i]) / 2.0;
    }

    cout << fixed << setprecision(10) << ans << endl;
}