#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b, c, k; cin >> a >> b >> c >> k;

    int s, t; cin >> s >> t;

    int ans = s * a + t * b;

    if (s + t >= k) {
        ans -= (s + t) * c;
    }

    cout << ans << endl;
}