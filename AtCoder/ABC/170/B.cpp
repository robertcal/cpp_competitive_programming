#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int x, y; cin >> x >> y;

    if ((y - 2 * x) % 2 == 0 && (y - 2 * x) / 2 >= 0 && (4 * x - y) % 2 == 0 && (4 * x - y) / 2 >= 0) {
        puts("Yes");
    } else {
        puts("No");
    }
}