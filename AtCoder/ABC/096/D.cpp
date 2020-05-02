#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll prime[1000000];
bool is_prime[1000010];

//エラトステネスのふるい
//n以下の素数の数を返す
ll sieve(ll n) {
    ll p = 0;

    for (ll i = 0; i <= n; ++i) {
        is_prime[i] = true;
    }

    is_prime[0] = is_prime[1] = false;

    for (ll i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            prime[p++] = i;
            for (ll j = 2 * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    return p;
}

int main() {

    int n; cin >> n;

    sieve(1000000);


}