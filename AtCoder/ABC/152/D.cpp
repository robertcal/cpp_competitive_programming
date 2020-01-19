#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    ll sum = 0;

    for (ll i = 1; i <= n; ++i) {
        for (ll j = 1; j <= n; ++j) {
            if (i % 10 == 0 || j % 10 == 0) {
                continue;
            }

            string a = to_string(i);
            string b = to_string(j);

            if (a[0] == b[b.size()-1] && a[a.size()-1] == b[0]) {
               ++sum;
            }
        }
    }

    cout << sum << endl;
}