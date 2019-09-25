#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, k; cin >> n >> k;

    int ans = 1;

    for (int i = 1; i <= n; ++i) {
        ans = min(ans * 2, ans + k);
    }

    cout << ans << endl;
}