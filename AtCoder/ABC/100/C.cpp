#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n; cin >> n;

    ll ans = 0;

    for (int i = 0; i < n; ++i) {
        ll a; cin >> a;

        while (a % 2 == 0) {
            a /= 2;
            ++ans;
        }
    }

    cout << ans << endl;
}