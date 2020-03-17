#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    double ans = (double)v[0];

    for (int i = 1; i < n; ++i) {
        ans = (ans + (double)v[i]) / 2.0;
    }

    cout << fixed << setprecision(10) << ans << endl;
}