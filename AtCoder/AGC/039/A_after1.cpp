#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;
    ll k; cin >> k;

    set<char> se;

    for (ll i = 0; i < s.size(); ++i) {
        se.insert(s[i]);
    }

    if (se.size() == 1) {
        cout << s.size() * k / 2 << endl;
        return 0;
    }

    string t = s + s;

    ll cnt1 = 0;

    for (int i = 0; i < s.size()-1; ++i) {
        if (s[i] == s[i+1]) {
            s[i+1] = 'A';
            ++cnt1;
        }
    }

    ll cnt2 = 0;

    for (int i = 0; i < t.size()-1; ++i) {
        if (t[i] == t[i+1]) {
            t[i+1] = 'A';
            ++cnt2;
        }
    }

    cout << cnt1 + (cnt2 - cnt1) * (k - 1) << endl;
}