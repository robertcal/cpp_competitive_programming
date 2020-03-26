#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    string ans = "";

    for (int i = 0; i < s.length(); ++i) {
        if (0 <= s[i] - '0' && s[i] - '0' <= 9) {
            ans += s[i];
        }
    }

    cout << ans << endl;
}