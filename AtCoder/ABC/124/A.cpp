#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int a, b; cin >> a >> b;

    int ma = max(a, b);

    if (a == b) {
        cout << ma + ma << endl;
    } else {
        cout << ma + ma - 1 << endl;
    }
}