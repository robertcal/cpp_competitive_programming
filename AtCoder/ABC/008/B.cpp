#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    map<string, int> ma;

    for (int i = 0; i < n; ++i) {
        string s; cin >> s;

        ma[s]++;
    }

    int mx = 0;

    for (auto m : ma) {
        mx = max(mx, m.second);
    }

    for (auto m : ma) {
        if (m.second == mx) {
            cout << m.first << endl;
            return 0;
        }
    }
}