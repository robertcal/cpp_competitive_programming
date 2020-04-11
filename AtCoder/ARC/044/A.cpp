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

    ll n; cin >> n;

    if (is_prime(n)) {
        puts("Prime");
        return 0;
    }

    if (n == 1) {
        puts("Not Prime");
        return 0;
    }

    bool is_prime = true;

    if ((n % 10) % 2 == 0 || (n % 10) == 5) is_prime = false;

    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    if (sum % 3 == 0) is_prime = false;

    if (is_prime) {
        puts("Prime");
        return 0;
    } else {
        puts("Not Prime");
        return 0;
    }
}