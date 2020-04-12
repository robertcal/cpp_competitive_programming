#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int k; cin >> k;

    ll sum = 0;

    for (int i = 1; i <= k; ++i) {
        for (int j = 1; j <= k; ++j) {
            for (int l = 1; l <= k; ++l) {
                sum += __gcd(i, __gcd(j, l));
            }
        }
    }

    cout << sum << endl;
}