#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    int ans = 0;

    for (int i = 0; i < n-1; ++i) {
        if (p[i] == i+1) {
            swap(p[i], p[i+1]);
            ++ans;
        }
    }

    if (p[n-1] == n) {
        ++ans;
    }

    cout << ans << endl;
}