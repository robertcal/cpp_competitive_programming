#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n; cin >> n;

    vector<ll> t(n);
    for (ll i = 0; i < n; ++i) {
        cin >> t[i];
    }

    if (n == 1){
        cout << t[0] << endl;
        return 0;
    }

    ll gcd = __gcd(t[1], t[0]);
    ll ans = t[1] / gcd * t[0];

    for (ll i = 2; i < n; ++i) {
        gcd = __gcd(ans, t[i]);
        ans = ans / gcd * t[i];
    }

    cout << ans << endl;
}