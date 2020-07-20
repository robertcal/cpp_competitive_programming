#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        if (i != m) {
            cout << i << endl;
            return 0;
        }
    }
}