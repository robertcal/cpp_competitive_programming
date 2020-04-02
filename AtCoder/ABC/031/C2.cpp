#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = -INF;

    for (int i = 0; i < n; ++i) {
        int ao_mx = -INF;
        int tmp_ans = -INF;

        for (int j = 0; j < n; ++j) {
            if (i == j) continue;

            int ta = 0;
            int ao = 0;

            if (i <= j) {
                for (int k = i; k <= j; ++k) {
                    if ((k - i) % 2 == 0) {
                        ta += a[k];
                    } else {
                        ao += a[k];
                    }
                }
            } else {
                for (int k = j; k <= i; ++k) {
                    if ((k - j) % 2 == 0) {
                        ta += a[k];
                    } else {
                        ao += a[k];
                    }
                }
            }

            if (ao_mx < ao) {
                ao_mx = ao;
                tmp_ans = ta;
            }
        }

        ans = max(ans, tmp_ans);
    }

    cout << ans << endl;
}