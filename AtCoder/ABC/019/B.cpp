#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    string ans;

    pair<char, int> p;

    for (int i = 0; i <= s.size(); ++i) {
        if (i == 0) {
            p = make_pair(s[i], 1);
            continue;
        }

        if (p.first == s[i]) {
            ++p.second;
        } else {
            ans += p.first + to_string(p.second);
            p.first = s[i];
            p.second = 1;
        }
    }

    cout << ans << endl;
}