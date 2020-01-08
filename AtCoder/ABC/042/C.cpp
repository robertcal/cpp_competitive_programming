#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;

    vector<int> d(k);
    for (int i = 0; i < k; ++i) {
        cin >> d[i];
    }

    for (int i = 0; i <= 100000; ++i) {
        int t = n + i;

        int match = true;

        while (t > 0) {
            for (auto j : d) {
                if (t % 10 == j) {
                    match = false;
                    break;
                }
            }
            t /= 10;
        }

        if (match) {
            cout << n + i << endl;
            return 0;
        }
    }
}