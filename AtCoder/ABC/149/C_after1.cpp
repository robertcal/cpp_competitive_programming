#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }

    int cnt = 0;

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            ++cnt;
        }
    }

    if (cnt == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {

    int x; cin >> x;

    while (!is_prime(x)) {
        ++x;
    }

    cout << x << endl;
}