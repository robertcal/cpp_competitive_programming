#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    ll m = 0;
    ll a = 0;
    ll r = 0;
    ll c = 0;
    ll h = 0;

    for (int i = 0; i < n; ++i) {
        string s; cin >> s;

        if (s[0] == 'M') {
            ++m;
        }

        if (s[0] == 'A') {
            ++a;
        }

        if (s[0] == 'R') {
            ++r;
        }

        if (s[0] == 'C') {
            ++c;
        }

        if (s[0] == 'H') {
            ++h;
        }
    }

    ll ans = 0;

    ans = m * a * r
            + m * a * c
            + m * a * h
            + m * r * c
            + m * r * h
            + m * c * h
            + a * r * c
            + a * r * h
            + a * c * h
            + r * c * h;

    cout << ans << endl;
}