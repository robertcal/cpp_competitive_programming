#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, a, b; cin >> n >> a >> b;

    if (n <= 5) {
        cout << b * n << endl;
    } else {
        cout << b * 5 + a * (n - 5) << endl;
    }
}