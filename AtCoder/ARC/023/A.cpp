#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int day(int y, int m, int d) {
    int res = 365 * y + y / 4 - y / 100 + y / 400 + (306 * (m + 1)) / 10 + d - 429;
    return res;
}

int main() {

    int y, m, d; cin >> y >> m >> d;
    if (m == 1 || m == 2) {
        m += 12;
        y--;
    }

    cout << day(2014, 5, 17) - day(y, m, d) << endl;
}