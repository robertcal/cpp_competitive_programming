#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    vector<int> d(7);
    vector<int> j(7);

    for (int i = 0; i < 7; ++i) {
        cin >> d[i];
    }

    for (int i = 0; i < 7; ++i) {
        cin >> j[i];
    }

    int ans = 0;
    for (int i = 0; i < 7; ++i) {
        ans += max(d[i], j[i]);
    }

    cout << ans << endl;
}