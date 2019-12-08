#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, k; cin >> n >> k;

    if (k % 2 == 1) {
        cout << (n / k) * (n / k) * (n / k) << endl;
    } else {
        ll x = n / k;
        ll y = (n + k / 2) / k;

        cout << x * x * x + y * y * y << endl;
    }
}