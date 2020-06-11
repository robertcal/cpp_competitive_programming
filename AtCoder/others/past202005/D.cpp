#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    int d[10][5][3] = {};
    //0から
    d[0][1][1] = 1;
    d[0][2][1] = 1;
    d[0][3][1] = 1;

    d[1][0][0] = 1;
    d[1][2][0] = 1;
    d[1][3][0] = 1;
    d[1][0][2] = 1;
    d[1][1][2] = 1;
    d[1][2][2] = 1;
    d[1][3][2] = 1;

    d[2][1][0] = 1;
    d[2][1][1] = 1;
    d[2][3][1] = 1;
    d[2][3][2] = 1;

    d[3][1][0] = 1;
    d[3][3][0] = 1;
    d[3][1][1] = 1;
    d[3][3][1] = 1;

    d[4][3][0] = 1;
    d[4][4][0] = 1;
    d[4][0][1] = 1;
    d[4][1][1] = 1;
    d[4][3][1] = 1;
    d[4][4][1] = 1;

    d[5][3][0] = 1;
    d[5][1][1] = 1;
    d[5][3][1] = 1;
    d[5][1][2] = 1;

    d[6][1][1] = 1;
    d[6][3][1] = 1;
    d[6][1][2] = 1;

    d[7][1][0] = 1;
    d[7][2][0] = 1;
    d[7][3][0] = 1;
    d[7][4][0] = 1;
    d[7][1][1] = 1;
    d[7][2][1] = 1;
    d[7][3][1] = 1;
    d[7][4][1] = 1;

    d[8][1][1] = 1;
    d[8][3][1] = 1;

    d[9][3][0] = 1;
    d[9][1][1] = 1;
    d[9][3][1] = 1;

    vector<string> s(5);
    for (int i = 0; i < 5; ++i) {
        cin >> s[i];
    }

    for (int i = 0; i < n; ++i) {
        int t[5][3] = {};

        for (int j = 0; j < 5; ++j) {
            for (int k = 4 * i + 1; k <= 4 * i + 3; ++k) {
                if (s[j][k] == '.') {
                    t[j][k - 4 * i - 1] = 1;
                }
            }
        }

        for (int j = 0; j <= 9; ++j) {
            bool ok = true;
            for (int k = 0; k < 5; ++k) {
                for (int l = 0; l < 3; ++l) {
                    if (t[k][l] != d[j][k][l]) {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok) {
                cout << j;
                break;
            }
        }
    }

    cout << endl;
}