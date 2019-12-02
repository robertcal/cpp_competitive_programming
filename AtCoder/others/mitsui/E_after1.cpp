#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;
const int MOD = 1000000007;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll ans = 1;

    int c[3] = {}; //使った帽子の個数を管理

    for (int i = 0; i < n; ++i) {
        ll cnt = 0; //使える帽子の個数（=パターン数）
        ll id = -1;

        if (a[i] == c[0]) { //使える帽子か確認
            ++cnt;
            id = 0;
        }

        if (a[i] == c[1]) { //使える帽子か確認
            ++cnt;
            id = 1;
        }

        if (a[i] == c[2]) { //使える帽子か確認
            ++cnt;
            id = 2;
        }

        if (id == -1) { //使える帽子がない場合
            cout << 0 << endl;
            return 0;
        }

        ans *= cnt;
        ans %= MOD;
        ++c[id];
    }

    cout << ans << endl;
}
