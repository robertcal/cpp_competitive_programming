#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll d; cin >> d;

    vector<ll> c(26);
    for (ll i = 0; i < 26; ++i) {
        cin >> c[i];
    }

    vector<vector<ll>> s(d, vector<ll>(26));
    for (ll i = 0; i < d; ++i) {
        for (ll j = 0; j < 26; ++j) {
            cin >> s[i][j];
        }
    }

    vector<ll> t(d);
    for (ll i = 0; i < d; ++i) {
        ll idx = 0;
        ll mx = 0;
        for (ll j = 0; j < 26; ++j) {
            if (mx < s[i][j]) {
                mx = s[i][j];
                idx = j;
            }
        }
        t[i] = idx;
    }

    vector<ll> score(d, 0);
    vector<vector<ll>> last(d, vector<ll>(26, 0));

    auto re_score = [&](ll start) {
        for (ll i = start; i < d; ++i) {
            score[i] = (i - 1 >= 0 ? score[i - 1] : 0) + s[i][t[i]];

            if (i - 1 >= 0) {
                last[i] = last[i - 1];
            } else {
                for (ll j = 0; j < 26; ++j) {
                    last[0][j] = 0;
                }
            }

            last[i][t[i]] = i + 1;

            ll j = i + 1;

            for (ll k = 0; k < 26; ++k) {
                score[i] -= c[k] * (j - last[i][k]);
            }
        }
    };

    re_score(0);

    vector<vector<pair<ll, ll>>> kouho(d);

    ll mx_score = score[d - 1];
//    for (int r = 0; r < 10; ++r) {
        for (ll i = 0; i < d; ++i) {
            for (ll j = 0; j < 26; ++j) {
                ll tmp = t[i];

                t[i] = j;
                re_score(i);

                kouho[i].push_back(make_pair(score[d - 1], j));

                if (mx_score >= score[d - 1]) {
                    t[i] = tmp;
                    re_score(i);
                } else {
                    mx_score = score[d - 1];
                }
            }
        }
//    }

    for (int i = 0; i < d; ++i) {
        sort(kouho[i].rbegin(), kouho[i].rend());
    }

    for (int r = 0; r < 10; ++r) {
        for (ll i = 0; i < d; ++i) {
            for (ll j = 0; j < 10; ++j) {
                ll tmp = t[i];

                t[i] = kouho[i][j].second;
                re_score(i);

                if (mx_score >= score[d - 1]) {
                    t[i] = tmp;
                    re_score(i);
                } else {
                    mx_score = score[d - 1];
                }
            }
        }
    }

    for (ll i = 0; i < d; ++i) {
        cout << t[i] + 1 << endl;
    }
}