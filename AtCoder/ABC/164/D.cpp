#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
namespace mp = boost::multiprecision;

int main() {

    string s; cin >> s;
    ll n = s.length();

    ll ans = 0;
    bool fin = false;
    for (ll i = 0; i < n; ++i) {
        for (ll j = 4; i + j <= n; ++j) {
            string t = s.substr(i, j);

            if (mp::cpp_int(t) % 2019 == 0) {
                ++ans;
                i = i + j - 2;
                break;
            }

            if (i + j == n) fin = true;
        }
        if (fin) break;
    }

    if (fin) {
        ans = 0;
        reverse(s.begin(), s.end());

        for (ll i = 0; i < n; ++i) {
            for (ll j = 4; i + j <= n; ++j) {
                string t = s.substr(i, j);

                if (mp::cpp_int(t) % 2019 == 0) {
                    ++ans;
                    i = i + j - 2;
                    break;
                }
            }
        }
    }

    cout << ans << endl;
}