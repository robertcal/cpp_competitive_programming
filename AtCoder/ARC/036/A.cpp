#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;

    vector<int> t(n);
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    for (int i = 3; i <= n; ++i) {
        int sum = t[i - 1] + t[i - 2] + t[i - 3];

        if (sum < k) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}