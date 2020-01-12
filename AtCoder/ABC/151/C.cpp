#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    vector<pair<int, bool>> t(n);

    for (int i = 0; i < n; ++i) {
        t[i] = make_pair(0, false);
    }

    for (int i = 0; i < m; ++i) {
        int p; cin >> p; --p;
        string s; cin >> s;

        if (t[p].second == false) {
            if (s == "AC") {
                t[p].second = true;
            } else {
                t[p].first++;
            }
        }
    }

    int ac = 0;
    int wa = 0;

    for (int i = 0; i < n; ++i) {
        if (t[i].second == true) {
            ac++;
            wa += t[i].first;
        }
    }

    cout << ac << ' ' << wa << endl;
}