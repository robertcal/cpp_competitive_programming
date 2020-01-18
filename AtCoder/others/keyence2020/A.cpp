#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int h, w, n; cin >> h >> w >> n;

    if (n % max(h, w) == 0) {
        cout << n / max(h, w) << endl;
    } else {
        cout << n / max(h, w) + 1 << endl;
    }

}