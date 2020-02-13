#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    vector<vector<pair<int, int>>> t(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];

        for (int j = 0; j < a[i]; ++j) {
            int x, y; cin >> x >> y;
            --x;
            t[i].push_back(make_pair(x, y));
        }
    }

    int ans = 0;

    for (int i = 0; i < (1 << n); ++i) {
        vector<int> p(n, 0);
        bool ok = true;

        for (int j = 0; j < n; ++j) {
            p[j] = i & (1 << j);
        }

        for (int j = 0; j < n; ++j) {
            if (p[j]) {
                //正直者が本当か確認
                for (int k = 0; k < a[j]; ++k) {
                    if (t[j][k].second) {
                        if (!p[t[j][k].first]) {
                            ok = false;
                        }
                    } else {
                        if (p[t[j][k].first]) {
                            ok = false;
                        }
                    }
                }
            }
        }

        if (ok) {
            int sum = 0;
            for (int j = 0; j < n; ++j) {
                if (p[j]) {
                    ++sum;
                }
            }

            ans = max(ans, sum);
        }
    }

    cout << ans << endl;
}