#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;

    if (n < k) {
        cout << -1 << endl;
        return 0;
    }

    cout << k - 1 << endl;
}