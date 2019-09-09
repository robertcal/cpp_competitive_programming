#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll lcm = a[0];
    for (int i = 0; i < n-1; ++i) {
        lcm = (lcm * a[i+1]) / __gcd(lcm, a[i+1]);
    }

    ll ans = 0;
    for (int i = 0; i < lcm; ++i) {
        ll sum = 0;
        for (int j = 0; j < n; ++j) {
             sum += i % a[j];
        }
        ans = max(ans, sum);
    }

    cout << ans << endl;
}