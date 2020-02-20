#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;
    string s; cin >> s;

    int ans = 0;
    for (int i = 0; i < n-1; ++i) {
        if (s[i] == s[i+1]) {
            ++ans;
        }
    }

    cout << min(ans + 2 * k, n-1) << endl;
}