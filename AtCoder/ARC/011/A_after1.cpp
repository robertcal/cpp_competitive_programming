#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int m, n, N; cin >> m >> n >> N;

    int ans = N;
    int sum = N;

    while (sum >= m) {
        sum -= m;
        sum += n;
        ans += n;
    }

    cout << ans << endl;
}