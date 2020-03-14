#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll a, b, c; cin >> a >> b >> c;

    if (c - a - b > 0 && 4 * a * b < (c - a - b) * (c - a - b)) {
        puts("Yes");
    } else {
        puts("No");
    }
}