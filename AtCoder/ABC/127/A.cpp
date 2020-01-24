#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int a, b; cin >> a >> b;

    if (a <= 5) {
        cout << 0 << endl;
    } else if (6 <= a && a <= 12) {
        cout << b / 2 << endl;
    } else {
        cout << b << endl;
    }
}