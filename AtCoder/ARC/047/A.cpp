#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, l; cin >> n >> l;
    string s; cin >> s;

    int ans = 0;
    int tab = 1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '+') {
            ++tab;
            if (tab > l) {
                ++ans;
                tab = 1;
            }
        } else {
            --tab;
        }
    }

    cout << ans << endl;
}