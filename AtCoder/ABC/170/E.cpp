#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, q; cin >> n >> q;

    // 園、レート
    vector<pair<int, int>> y(n);

    // レート、幼児番号
    vector<set<pair<int, int>>> e(200000);

    for (int i = 0; i < n; ++i) {
        int a, b; cin >> a >> b;
        --b;

        y[i] = make_pair(a, b);
        e[b].insert(make_pair(a, i));
    }

    int mn = INF;
    for (int i = 0; i < 200000; ++i) {
        if (e[i].empty()) continue;

        auto itr = e[i].rbegin();

        mn = min(mn, itr->first);
    }

    for (int i = 0; i < q; ++i) {
        int c, d; cin >> c >> d;
        --c; --d;

        int before_e = y[c].first;

        auto itr = e[before_e].rbegin();
        if (itr->first == y[c].second) {
            auto second_itr = e[before_e].rbegin()++;
            mn = min(mn, second_itr->first);
        }

        auto itr2 = e[d].rbegin();
        if (itr2->first < y[c].second) {

        }
    }
}