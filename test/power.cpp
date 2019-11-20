#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

//二分累乗法

//a^n modを計算
ll modpow(ll a, ll n, ll mod) {
    ll res = 1;

    while (n > 0) {
        if (n & 1) {
            res = res * a % mod;
        }

        a = a * a % mod;

        n >>= 1;
    }
}

int main() {
    cout << modpow(3, 45, 1000000007) << endl;
}