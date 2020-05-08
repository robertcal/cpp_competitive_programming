#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    map<char, int> mp;
    for (int i = 0; i < n; ++i) {
        mp[s[i]]++;
    }

    int ans = 0;
    ans += mp['R'] % 2;
    ans += mp['G'] % 2;
    ans += mp['B'] % 2;

    cout << ans << endl;
}