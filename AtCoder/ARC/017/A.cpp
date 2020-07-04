#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

bool is_prime(ll n) {
    if (n <= 1) return false;
    if (n == 2) return true;

    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {

    int n; cin >> n;

    if (is_prime(n)) {
        puts("YES");
    } else {
        puts("NO");
    }
}