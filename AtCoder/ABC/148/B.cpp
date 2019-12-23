#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    string s, t; cin >> s >> t;

    string ans = "";

    for (int i = 0; i < n; ++i) {
        ans += s[i];
        ans += t[i];
    }

    cout << ans << endl;
}