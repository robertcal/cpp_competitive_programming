#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<pair<string, int>> p(n);
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        int t; cin >> t;

        p[i] = make_pair(s, t);
    }

    string x; cin >> x;

    int ans = 0;

    bool match = false;

    for (auto a : p) {
        if (a.first == x) {
            match = true;
            continue;
        }

        if (match) {
            ans += a.second;
        }
    }

    cout << ans << endl;
}