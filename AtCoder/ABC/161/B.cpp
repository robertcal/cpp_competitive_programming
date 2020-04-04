#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.rbegin(), a.rend());

    for (int i = 0; i < m; ++i) {
        if (a[i] * 4 * m < sum) {
            puts("No");
            return 0;
        }
    }

    puts("Yes");
}