#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<pair<int, int>> rx(n);
    vector<pair<int, int>> ry(n);
    vector<pair<int, int>> bx(n);
    vector<pair<int, int>> by(n);
    for (int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        rx[i] = make_pair(x, y);
        ry[i] = make_pair(y, x);
    }

    for (int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        bx[i] = make_pair(x, y);
        by[i] = make_pair(y, x);
    }

    sort(rx.begin(), rx.end());
    sort(ry.begin(), ry.end());
    sort(bx.begin(), bx.end());
    sort(by.begin(), by.end());

    int mx = 0;
    int j = 0;
    for (int i = 0; i < n; ++i) {
        while (j < n) {
            if (rx[i].first <= bx[j].first && rx[i].second <= bx[j].second) {
                ++mx;
                ++j;
                break;
            }
            ++j;
        }
    }

    int my = 0;
    j = 0;
    for (int i = 0; i < n; ++i) {
        while (j < n) {
            if (ry[i].first <= by[j].first && ry[i].second <= by[j].second) {
                ++my;
                ++j;
                break;
            }
            ++j;
        }
    }

    cout << max(mx, my) << endl;
}