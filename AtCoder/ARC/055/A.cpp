#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    string ans = "1";

    for (int i = 1; i < n; ++i) {
        ans += '0';
    }

    ans += '7';

    cout << ans << endl;
}