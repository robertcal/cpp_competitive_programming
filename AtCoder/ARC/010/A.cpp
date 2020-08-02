#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m, a, b; cin >> n >> m >> a >> b;

    vector<int> c(m);
    for (int i = 0; i < m; ++i) {
        cin >> c[i];
    }

    for (int i = 0; i < m; ++i) {
        if (n <= a) {
            n += b;
        }

        n -= c[i];

        if (n < 0) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << "complete" << endl;
}