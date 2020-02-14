#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    string s, t; cin >> s >> t;

    int m = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == t[0]) {
            int p = 0;
            bool ok = true;

            while (i + p < s.size()) {
                if (s[i+p] != t[p]) {
                    ok = false;
                    break;
                }
                ++p;
            }

            if (ok) {
                m = max(m, p);
            }
        }
    }

    cout << 2 * n - m << endl;
}