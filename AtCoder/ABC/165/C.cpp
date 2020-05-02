#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll n, m, q;
ll ans;
vector<tuple<ll, ll, ll, ll>> g;

void rec(int num, int ko, vector<ll> A) {
    if (num > 0) A.push_back(num);

    if (ko == n) {
        //計算する
        ll sum = 0;
        for (ll i = 0; i < q; ++i) {
            ll a = get<0>(g[i]);
            ll b = get<1>(g[i]);
            ll c = get<2>(g[i]);
            ll d = get<3>(g[i]);

            if (A[b] - A[a] == c) {
                sum += d;
            }
        }
        ans = max(ans, sum);
        return;
    }

    for (ll i = num; i <= m; ++i) {
        if (i == 0) continue;

        rec(i, ko + 1, A);
    }
}

int main() {

    cin >> n >> m >> q;

    for (ll i = 0; i < q; ++i) {
        ll a, b, c, d; cin >> a >> b >> c >> d;
        --a; --b;
        g.push_back(make_tuple(a, b, c, d));
    }

    ans = 0;
    vector<ll> tmp;
    rec(0, 0, tmp);

    cout << ans << endl;
}