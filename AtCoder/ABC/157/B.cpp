#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int a[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> a[i][j];
        }
    }

    int n; cin >> n;

    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (b[k] == a[i][j]) {
                    a[i][j] = 0;
                }
            }
        }
    }

    bool ans = false;

    if (a[0][0] == 0 && a[0][1] == 0 && a[0][2] == 0) {
        ans = true;
    }

    if (a[1][0] == 0 && a[1][1] == 0 && a[1][2] == 0) {
        ans = true;
    }

    if (a[2][0] == 0 && a[2][1] == 0 && a[2][2] == 0) {
        ans = true;
    }

    if (a[0][0] == 0 && a[1][0] == 0 && a[2][0] == 0) {
        ans = true;
    }

    if (a[0][1] == 0 && a[1][1] == 0 && a[2][1] == 0) {
        ans = true;
    }

    if (a[0][2] == 0 && a[1][2] == 0 && a[2][2] == 0) {
        ans = true;
    }

    if (a[0][0] == 0 && a[1][1] == 0 && a[2][2] == 0) {
        ans = true;
    }

    if (a[0][2] == 0 && a[1][1] == 0 && a[2][0] == 0) {
        ans = true;
    }

    if (ans) {
        puts("Yes");
    } else {
        puts("No");
    }
}