#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, k; cin >> n >> k;

    if (n == 1) {
        cout << k << endl;
    } else {
        int ans = k;
        for (int i = 1; i < n; ++i) {
            ans *= (k - 1);
        }
        cout << ans << endl;
    }
}