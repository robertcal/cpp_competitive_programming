#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        int l, r; cin >> l >> r;

        ans += r - l + 1;
    }

    cout << ans << endl;
}