#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s, t; cin >> s >> t;

    int ans = 0;

    for (int i = 0; i < 3; ++i) {
        if (s[i] == t[i]) ++ans;
    }

    cout << ans << endl;
}