#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll k; cin >> k;
    
    priority_queue<ll, vector<ll>, greater<ll>> que;
    for (ll i = 1; i <= 9; ++i) {
        que.push(i);
    }

    for (ll i = 0; i < k; ++i) {
        ll t = que.top(); que.pop();

        if (i == k - 1) {
            cout << t << endl;
            return 0;
        }

        for (ll j = -1; j <= 1; ++j) {
            ll k = t % 10 + j;

            if (0 <= k && k <= 9) que.push(t * 10 + k);
        }
    }
}