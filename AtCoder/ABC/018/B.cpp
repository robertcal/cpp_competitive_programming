#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;
    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        int l, r; cin >> l >> r;
        --l; --r;

        string t;

        for (int k = 0; k < s.size(); ++k) {
            if (l <= k && k <= r) {
                for (int j = r; j >= l; --j) {
                    t += s[j];
                }
                k = r;
            } else {
                t += s[k];
            }
        }

        s = t;
    }

    cout << s << endl;
}