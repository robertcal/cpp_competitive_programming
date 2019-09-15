#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n, m; cin >> n >> m;

    priority_queue<ll> que;
    for (int i = 0; i < n; ++i) {
        ll a; cin >> a;
        que.push(a);
    }

    for (int i = 0; i < m; ++i) {
        ll t;
        t = que.top();
        que.pop();
        t = t / 2;

        que.push(t);
    }

    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        ll a;
        a = que.top();
        que.pop();
        ans += a;
    }

    cout << ans << endl;
}