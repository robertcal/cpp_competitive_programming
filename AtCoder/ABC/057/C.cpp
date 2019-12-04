#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n; cin >> n;

    int ans = INF;

    for (ll i = 1; i <= sqrt(n); ++i) {
        if (n % i != 0) {
            continue;
        }

        int f = max(to_string(i).length(), to_string(n / i).length());

        ans = min(ans, f);
    }

    cout << ans << endl;
}