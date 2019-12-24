#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    vector<int> t;

    int r = 0;
    int l = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '<') {
            if (l < 0) {
                t.push_back(l);
                l = 0;
            }
            ++r;
        } else {
            if (r > 0) {
                t.push_back(r);
                r = 0;
            }
            --l;
        }
    }

    if (l < 0) {
        t.push_back(l);
    }

    if (r > 0) {
        t.push_back(r);
    }

    ll ans = 0;

    if (t.size() == 1) {
        ans += abs(t[0]) * (abs(t[0]) + 1) / 2;
        cout << ans << endl;
        return 0;
    }

    for (int i = 0; i < t.size(); ++i) {
        if (i == 0 && t[i] < 0) {
            ans += abs(t[i]) * (abs(t[i]) + 1) / 2;
            continue;
        }

        if (i == t.size()-1 && t[i] > 0) {
            ans += t[i] * (t[i] + 1) / 2;
            continue;
        }

        if (i == t.size()-1 && t[i] < 0) {
            continue;
        }

        if (t[i] > 0 && t[i+1] < 0) {
            int ma = max(abs(t[i]), abs(t[i+1]));
            int mi = min(abs(t[i]), abs(t[i+1]));

            ans += ma * (ma + 1) / 2;
            ans += mi * (mi - 1) / 2;
        }
    }

    cout << ans << endl;
}