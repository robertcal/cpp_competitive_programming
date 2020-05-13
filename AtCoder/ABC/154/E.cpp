#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string n; cin >> n;
    int k; cin >> k;

    int ans = 0;
    if (k == 1) {
        ans += n[0] - '0';
        ans += 9 * (n.length() - 1);
    } else if (k == 2) {
        for (int i = 0; i < n.length(); ++i) {
            int t = n[i] - '0';
            if (i != 0) {
                ans += i * t;
            }
            ans += (t - 1) * 9 * (n.length() - 1 - i);
        }
    } else {

    }

    cout << ans << endl;
}