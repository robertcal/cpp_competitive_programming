#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, a, b; cin >> n >> a >> b;

    ll sum = 0;

    vector<ll> s(n);
    for (ll i = 0; i < n; ++i) {
        cin >> s[i];

        sum += s[i];
    }

    sort(s.begin(), s.end());

    if (s[n-1] - s[0] == 0) {
        cout << -1 << endl;
        return 0;
    }

    double p = (double)b / (double)(s[n-1] - s[0]);

    double q = ((double)(n * a) - p * (double)sum) / (double)n;

    cout << fixed << setprecision(10) << p << ' ' << q << endl;
}