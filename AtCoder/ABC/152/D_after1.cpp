#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    int cnt[10][10] = {};

    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);

        cnt[s[0] - '0'][s[s.size()-1] - '0']++;
    }

    int ans = 0;

    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);

        ans += cnt[s[s.size()-1] - '0'][s[0] - '0'];
    }

    cout << ans << endl;
}