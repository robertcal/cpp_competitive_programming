#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, a, b; cin >> n >> a >> b;

    ll ans = 0;
    
    for (int i = 1; i <= n; ++i) {
        ll sum = 0;
        ll t = i;
        
        while (t > 0) {
            sum += t % 10;
            t /= 10;
        }
        
        if (a <= sum && sum <= b) {
            ans += i;
        }
    }
    
    cout << ans << endl;
}