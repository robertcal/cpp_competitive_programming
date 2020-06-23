#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll dpx[1010][1010] = {}; // 何個目か、何個選んだか
ll dpy[1010][1010] = {}; // 何個目か、何個選んだか
ll dpz[1010][1010] = {}; // 何個目か、何個選んだか

int main() {

    ll n, m; cin >> n >> m;

    for (ll i = 0; i < n; ++i) {
        ll x, y, z; cin >> x >> y >> z;

        //選ぶ
        for (int j = 0; j < m + 10; ++j) {
            if (abs(dpx[i + 1][j + 1]) >= abs(dpx[i][j] + x)) {
                dpx[i + 1][j + 1] = dpx[i + 1][j + 1];
            } else {
                dpx[i + 1][j + 1] = dpx[i][j] + x;
            }

            if (abs(dpy[i + 1][j + 1]) >= abs(dpy[i][j] + y)) {
                dpy[i + 1][j + 1] = dpy[i + 1][j + 1];
            } else {
                dpy[i + 1][j + 1] = dpy[i][j] + y;
            }

            if (abs(dpz[i + 1][j + 1]) >= abs(dpz[i][j] + z)) {
                dpz[i + 1][j + 1] = dpz[i + 1][j + 1];
            } else {
                dpz[i + 1][j + 1] = dpz[i][j] + z;
            }
        }

        //選ばない
        for (int j = 0; j < m + 10; ++j) {
            if (abs(dpx[i + 1][j]) >= abs(dpx[i][j])) {
                dpx[i + 1][j] = dpx[i + 1][j];
            } else {
                dpx[i + 1][j] = dpx[i][j];
            }

            if (abs(dpy[i + 1][j]) >= abs(dpy[i][j])) {
                dpy[i + 1][j] = dpy[i + 1][j];
            } else {
                dpy[i + 1][j] = dpy[i][j];
            }

            if (abs(dpz[i + 1][j]) >= abs(dpz[i][j])) {
                dpz[i + 1][j] = dpz[i + 1][j];
            } else {
                dpz[i + 1][j] = dpz[i][j];
            }
        }
    }

    cout << abs(dpx[n][m]) + abs(dpy[n][m]) + abs(dpz[n][m]) << endl;
}