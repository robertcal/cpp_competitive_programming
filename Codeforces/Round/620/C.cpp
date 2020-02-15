#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int q; cin >> q;

    for (int i = 0; i < q; ++i) {
        int n, m; cin >> n >> m;

        vector<int> t(n);
        vector<int> l(n);
        vector<int> h(n);

        for (int j = 0; j < n; ++j) {
            cin >> t[j] >> l[j] >> h[j];
        }

        bool ok = true;

        for (int j = 0; j < n; ++j) {
            if ((m - t[j]) <= l[j] && l[j] <= (m + t[j]) || (m - t[j]) <= h[j] && h[j] <= (m + t[j])) {
                if (j == 0) {
                    continue;
                }

                if (l[j-1] <= l[j] && l[j] <= h[j-1] || l[j-1] <= h[j] && h[j] <= h[j-1]) {
                    //ok
                } else {
                    if (h[j-1] < l[j]) {
                        if (l[j] - h[j-1] <= t[j] - t[j-1]) {
                            //ok
                        } else {
                            ok = false;
                            break;
                        }
                    }

                    if (l[j-1] > h[j]) {
                        if (l[j-1] - h[j] <= t[j] - t[j-1]) {
                            //ok
                        } else {
                            ok = false;
                            break;
                        }
                    }
                }
            } else {
                ok = false;
                break;
            }
        }

        if (ok) {
            puts("YES");
        } else {
            puts("NO");
        }
    }
}