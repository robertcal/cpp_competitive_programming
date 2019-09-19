#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n; cin >> n;
    
    ll ans = 0;
    for (ll i = 1; i <= 100000; ++i) {
        if (i * i <= n) {
            ans = i * i;
        }
    }
    
    cout << ans << endl;
}