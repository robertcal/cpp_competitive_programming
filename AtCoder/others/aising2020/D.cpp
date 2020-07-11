#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll modX(ll num, ll nMod, ll nBit)
{
    while (num >= nMod * 2)
        num = (num >> nBit) + (num & nMod);

    if (num >= nMod)
        num -= nMod;

    return num;
}

int main() {

    ll n; cin >> n;
    string x; cin >> x;

    vector<ll> f(10000000, 0);
    for (ll i = 1; i < 10000000; ++i) {
        ll popcount = __builtin_popcountll(i);

        if (i % popcount == 0) {
            f[i] = 1;
        } else {
            f[i] += f[i % popcount] + 1;
        }
    }

//    ll start_n = 0;
//    ll k = 1;
//    for (ll i = 0; i < n; ++i) {
//        if (x[n - i - 1] == '1') {
//            start_n += k;
//        }
//        k *= 2;
//    }

    ll popcount = 0;
    for (ll i = 0; i < n; ++i) {
        if (x[i] == '1') {
            popcount++;
        }
    }

    vector<ll> ans;
    for (ll i = 0; i < n; ++i) {
        ll tmp = popcount;
        if (x[n - i - 1] == '0') {
            tmp++;
        } else {
            tmp--;
        }

        ll t = modX()

        ans.push_back(f[tmp]);
    }

    reverse(ans.begin(), ans.end());

    for (auto p : ans) {
        cout << p << endl;
    }
}