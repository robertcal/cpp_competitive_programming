#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    string t = "b";
    if (t == s) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 1; i < 100; ++i) {
        if (i % 3 == 1) {
            t = "a" + t + "c";
        }

        if (i % 3 == 2) {
            t = "c" + t + "a";
        }

        if (i % 3 == 0) {
            t = "b" + t + "b";
        }

        if (t == s) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}