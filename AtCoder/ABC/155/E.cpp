#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string n; cin >> n;

    ll ans = 0;

    ll re = 0;
    bool re9 = false;
    bool re9_2 = false;

    while (n.size() > 0) {
        ll t = n[0] - '0';
        if ((!re9_2 && t <= 5) || (re9_2 && t <= 4)) {
            ans += t;
            re = 0;
            re9 = false;
            re9_2 = false;
        } else {
            if (re >= 1) {
                if (re9_2) {
                    ans -= 1;
                }

                if (re9) {
                    if (t == 9) {
                        re9_2 = true;
                    } else {
                        re9_2 = false;
                    }
                } else {
                    re9 = false;
                }

                ans -= re;
                ans += 10 - t;
                ++re;
            } else {
                ans += 10 - t + 1;
                re = 1;
                if (t == 9) {
                    re9 = true;
                } else {
                    re9 = false;
                }
            }
        }

        n = n.substr(1);
    }

    cout << ans << endl;
}