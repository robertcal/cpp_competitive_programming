#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;
    ll n = s.length();

    ll ans = 0;
    bool conti = false;
    ll cnt = 0;
    for (ll i = 0; i < n - 1; ++i) {
        if (s[i] - '0' == 2 && s[i + 1] - '0' == 5) {
            conti = true;
            cnt++;
            ++i;
        } else {
            if (conti) {
                conti = false;
                ans += cnt * (cnt + 1) / 2;
                cnt = 0;
            }
        }
    }

    ans += cnt * (cnt + 1) / 2;

    cout << ans << endl;
}