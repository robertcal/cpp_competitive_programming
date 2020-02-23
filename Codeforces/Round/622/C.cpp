#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    vector<ll> m(n);
    for (ll i = 0; i < n; ++i) {
        cin >> m[i];
    }

    //極小値となる点を求める
    vector<ll> k_p;
    for (ll i = 1; i < n-1; ++i) {
        if (m[i-1] > m[i] && m[i] < m[i+1]) {
            k_p.push_back(i);
            continue;
        }

        if (m[i-1] > m[i] && m[i] == m[i+1]) {
            for (ll j = i+1; j < n; ++j) {
                if (m[j] < m[i]) {
                    break;
                }

                if (m[j] > m[i]) {
                    k_p.push_back(i);
                    break;
                }
            }
        }

        if (m[i-1] == m[i] && m[i] < m[i+1]) {
            for (ll j = i-1; j >= 0; --j) {
                if (m[j] < m[i]) {
                    break;
                }

                if (m[j] > m[i]) {
                    k_p.push_back(i);
                    break;
                }
            }
        }
    }

    vector<pair<ll, ll>> ma;

    for (auto p : k_p) {
        ma.push_back(make_pair(m[p], p));
    }

    sort(ma.begin(), ma.end());

    vector<ll> neo_k_p;
    for (auto m : ma) {
        neo_k_p.push_back(m.second);
    }

    for (auto p : neo_k_p) {
        ll left_sum = 0;
        ll right_sum = 0;

        for (ll i = p-1; i >= 0; --i) {
            if (m[i] > m[p]) {
                left_sum += m[i] - m[p];
            } else {
                break;
            }
        }

        for (ll i = p+1; i < n; ++i) {
            if (m[i] > m[p]) {
                right_sum += m[i] - m[p];
            } else {
                break;
            }
        }

        if (left_sum >= right_sum) {
            for (ll i = p+1; i < n; ++i) {
                if (m[i] > m[p]) {
                    m[i] = m[p];
                } else {
                    break;
                }
            }
        } else {
            for (ll i = p-1; i >= 0; --i) {
                if (m[i] > m[p]) {
                    m[i] = m[p];
                } else {
                    break;
                }
            }
        }
    }

    for (ll i = 0; i < n; ++i) {
        cout << m[i] << ' ';
    }

    cout << endl;
}