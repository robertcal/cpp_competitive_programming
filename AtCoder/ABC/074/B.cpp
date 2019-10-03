#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, k; cin >> n >> k;

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        ans += 2 * min(x, k-x);
    }

    cout << ans << endl;
}