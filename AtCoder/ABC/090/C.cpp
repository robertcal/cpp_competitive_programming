#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n, m; cin >> n >> m;

    if (n == 1 && m == 1) {
        cout << 1 << endl;
        return 0;
    }

    if (n == 1 && m > 1) {
        cout << m - 2 << endl;
        return 0;
    }

    if (m == 1 && n > 1) {
        cout << n - 2 << endl;
        return 0;
    }

    cout << (n - 2) * (m - 2) << endl;
}