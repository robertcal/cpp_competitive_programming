#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int a, b; cin >> a >> b;

    for (int i = 0; i < 100000; ++i) {
        if (i * 8 / 100 == a && i * 10 / 100 == b) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}