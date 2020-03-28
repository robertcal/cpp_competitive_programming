#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll x, y, a, b, c; cin >> x >> y >> a >> b >> c;

    vector<ll> vp(a);
    for (ll i = 0; i < a; ++i) {
        cin >> vp[i];
    }

    vector<ll> vq(b);
    for (ll i = 0; i < b; ++i) {
        cin >> vq[i];
    }

    sort(vp.rbegin(), vp.rend());
    sort(vq.rbegin(), vq.rend());

    priority_queue<ll, vector<ll>, greater<ll>> p;
    priority_queue<ll, vector<ll>, greater<ll>> q;
    priority_queue<ll> r;

    for (ll i = 0; i < x; ++i) {
        p.push(vp[i]);
    }

    for (ll i = 0; i < y; ++i) {
        q.push(vq[i]);
    }

    for (ll i = 0; i < c; ++i) {
        ll R; cin >> R;
        r.push(R);
    }

    for (ll i = 0; i < c; ++i) {
        ll t = r.top(); r.pop(); //無色の最大値

        ll tp = p.top();
        ll tq = q.top();

        if (t < tp && t < tq) break;

//        if (tp == tq) {
//
//        }

        if (tp < tq) {
            p.pop();
            p.push(t);
        } else {
            q.pop();
            q.push(t);
        }
    }

    ll ans = 0;

    for (ll i = 0; i < x; ++i) {
        ll t = p.top(); p.pop();
        ans += t;
    }

    for (ll i = 0; i < y; ++i) {
        ll t = q.top(); q.pop();
        ans += t;
    }

    cout << ans << endl;
}