#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int m; cin >> m;

    string vv;

    if (m < 100) {
        vv = "00";
    } else if (100 <= m && m <= 5000) {
        if (m * 10 / 1000 <= 9) {
            vv = "0" + to_string(m * 10 / 1000);
        } else {
            vv = to_string(m * 10 / 1000);
        }
    } else if (6000 <= m && m <= 30000) {
        vv = to_string(m / 1000 + 50);
    } else if (35000 <= m && m <= 70000) {
        vv = to_string((m / 1000 - 30) / 5 + 80);
    } else {
        vv = "89";
    }

    cout << vv << endl;
}