#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        char t = s[i];

        int j = i;
        while (t == s[j] && j < n) {
            ++j;
        }

        ++ans;
        i = j - 1;
    }

    cout << ans << endl;
}