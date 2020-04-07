#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int s, l, r; cin >> s >> l >> r;

    if (l <= s && s <= r) {
        cout << s << endl;
        return 0;
    }

    if (s < l) {
        cout << l << endl;
        return 0;
    }

    cout << r << endl;
    return 0;
}