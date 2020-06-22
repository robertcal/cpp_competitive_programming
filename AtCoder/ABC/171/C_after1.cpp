#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;
    string ans = "";

    while (n > 0) {
        n--;
        ans += 'a' + n % 26;
        n /= 26;
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;
}