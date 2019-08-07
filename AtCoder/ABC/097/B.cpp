#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll X; cin >> X;
    ll ans = 1;

    for (int i = 2; i <= X; ++i) {
        ll tmp = i * i;
        while (tmp <= X) {
            ans = max(ans, tmp);
            tmp = tmp * i;
        }
    }

    cout << ans << endl;
}