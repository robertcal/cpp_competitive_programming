#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int ans = 0;

    for (int i = 0; i < 3; ++i) {
        int s, e; cin >> s >> e;

        ans += s * e / 10;
    }

    cout << ans << endl;
}