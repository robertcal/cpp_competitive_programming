#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    int days[13] = {0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
    int y[367] = {};

    for (int i = 1; i <= 366; ++i) {
        if (i % 7 == 1 || i % 7 == 0) {
            y[i] = 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        string m, d;
        getline(cin, m, '/');
        getline(cin, d);

        int day = days[stoi(m)] + stoi(d);

        for (int j = day; j <= 366; ++j) {
            if (y[j] == 0) {
                y[j] = 1;
                break;
            }
        }
    }

    int ans = 0;
    int cnt = 0;
    for (int i = 1; i <= 366; ++i) {
        if (y[i] == 1) {
            ++cnt;
            ans = max(ans, cnt);
        } else {
            cnt = 0;
        }
    }

    cout << ans << endl;
}