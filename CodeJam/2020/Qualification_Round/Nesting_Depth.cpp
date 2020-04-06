#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int t; cin >> t;

    for (int i = 0; i < t; ++i) {
        string s; cin >> s;

        string ans = "";

        int before = 0;

        for (int j = 0; j < s.length(); ++j) {
            int d = s[j] - '0' - before;

            if (d > 0) {
                for (int k = 0; k < d; ++k) {
                    ans += '(';
                }
            } else if (d < 0) {
                for (int k = 0; k < abs(d); ++k) {
                    ans += ')';
                }
            }

            ans += s[j];
            before = s[j] - '0';
        }

        for (int j = 0; j < abs(before); ++j) {
            ans += ')';
        }

        cout << "Case #" << i + 1 << ": " << ans << endl;
    }
}