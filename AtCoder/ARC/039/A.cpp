#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string a, b; cin >> a >> b;

    if (a == "999" && b == "100") {
        cout << 899 << endl;
        return 0;
    }

    int ans = -INF;

    string c = a;
    string d = b;
    for (int i = 0; i < 3; ++i) {
        if (c[i] != '9') {
            c[i] = '9';
            ans = max(ans, stoi(c) - stoi(b));
            break;
        }
    }

    for (int i = 0; i < 3; ++i) {
        if (i == 0 && d[i] != '1') {
            d[i] = '1';
            ans = max(ans, stoi(a) - stoi(d));
            break;
        }

        if (i != 0 && d[i] != '0') {
            d[i] = '0';
            ans = max(ans, stoi(a) - stoi(d));
            break;
        }
    }

    cout << ans << endl;
}