#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    vector<vector<int>> a(4, vector<int>(4));
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> a[i][j];
        }
    }

    bool conti = false;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (a[i][j] == a[i][j + 1]) {
                conti = true;
                break;
            }
        }
    }


    for (int j = 0; j < 4; ++j) {
        for (int i = 0; i < 3; ++i) {
            if (a[i][j] == a[i + 1][j]) {
                conti = true;
                break;
            }
        }
    }

    if (conti) {
        puts("CONTINUE");
    } else {
        puts("GAMEOVER");
    }
}