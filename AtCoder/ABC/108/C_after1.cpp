#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, k; cin >> n >> k;

    vector<ll> num(k, 0);

    for (ll i = 1; i <= n; ++i) {
        //1以上n以下の数値をkで割り、余った数をカウント
        ++num[i%k];
    }

    ll ans = 0;

    //a%kで全探索→調べる範囲は0〜k-1
    for (int a = 0; a < k; ++a) {
        ll b = (k - a) % k; //a%k + b%k = k%kより
        ll c = (k - a) % k; //a%k + c%k = k%kより

        if ((b + c) % k != 0) { //b+cも条件を満たしているか確認する
            continue;
        }

        ans += num[a] * num[b] * num[c];
    }

    cout << ans << endl;
}