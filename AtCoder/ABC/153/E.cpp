#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int h, n; cin >> h >> n;

    vector<pair<int, int>> t(n);

    for (int i = 0; i < n; ++i) {
        int a, b; cin >> a >> b;

        t[i] = make_pair(b, a);
    }

    sort(t.begin(), t.end());

    int max_i = 0;
    double max_value = 0;

    for (int i = 0; i < n; ++i) {
        if (max_value < (double)t[i].second / (double)t[i].first) {
            max_value = (double)t[i].second / (double)t[i].first;
            max_i = i;
        }
    }

    int sum = 0;

    while (h > 0) {
        h -= t[max_i].second;
        sum += t[max_i].first;
    }

    h += t[max_i].second;
    sum -= t[max_i].first;

    int ans = INF;

    for (int i = 0; i < n; ++i) {
        int tmp_h = h;
        int tmp_sum = sum;

        while (tmp_h > 0) {
            tmp_h -= t[i].second;
            tmp_sum += t[i].first;
        }

        ans = min(ans, tmp_sum);
    }

    cout << ans << endl;
}