#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<ll> tel;
    vector<ll> visit(n + 10, 0);

    tel.push_back(1);
    visit[1] = 1;
    ll cnt = 1;
    ll nt = 0;

    for (ll i = 0; i < 2 * n; ++i) {
        ll next = a[tel[tel.size() - 1] - 1];

        if (visit[next] == 1) {
            tel.push_back(next);
            nt = a[tel[tel.size() - 1] - 1];
            cnt++;
            break;
        }

        tel.push_back(next);
        visit[next] = 1;
        cnt++;
    }

    ll pos = 0;
    for (auto t : tel) {
        if (t == nt) break;
        pos++;
    }

    ll roop = cnt - pos;

    if (k - pos >= 0) {
        ll idx = (k - pos) % roop;

        cout << tel[pos + idx] << endl;
    } else {
        cout << tel[k] << endl;
    }
}