#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n, k, q; cin >> n >> k >> q;

    ll p[100010] = {0};

    for (ll i = 0; i < q; ++i) {
        ll a; cin >> a;
        a--;

        p[a]++;
    }

    for (ll i = 0; i < n; ++i) {
        if (k - (q - p[i]) > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}