#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    int ans = 0;
    int ma[9] = {};

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (s[i][j] == 'x') ++ans;

            if (s[i][j] == 'o' && ma[j] == 0) {
                ++ans;
            }

            if (s[i][j] == 'o') {
                ma[j] = 1;
            } else {
                ma[j] = 0;
            }
        }
    }

    cout << ans << endl;
}