#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    ll l = 1;
    ll r = 1;

    bool takahashi = true;
    while(l <= n) {
        l *= 2;
        r = r * 2 + 1;

        if (takahashi) {
            takahashi = false;
        } else {
            takahashi = true;
        }

//        if (n < r) break;
    }

    if (takahashi) {
        puts("Takahashi");
    } else {
        puts("Aoki");
    }
}