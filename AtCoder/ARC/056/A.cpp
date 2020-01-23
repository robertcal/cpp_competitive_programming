#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll a, b, k, l; cin >> a >> b >> k >> l;

    if (k % l == 0) {
        cout << k / l * b << endl;
    } else {
        cout << min((k / l) * b + (k % l) * a, ((k / l) + 1) * b) << endl;
    }
}