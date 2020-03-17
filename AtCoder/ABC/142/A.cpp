#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    int t;

    if (n % 2 == 0) {
        t = n / 2;
    } else {
        t = n / 2 + 1;
    }

    cout << fixed << setprecision(10) << (double)t / (double)n << endl;
}