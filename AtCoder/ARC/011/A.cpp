#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int m, n, N; cin >> m >> n >> N;

    int ans = N;
    int tmp = N;
    int amari = 0;

    while (tmp + amari >= m) {
        int sum = (tmp + amari) / m * n;
        ans += sum;
        amari = (tmp + amari) % m;
        tmp = sum;
    }

    cout << ans << endl;
}