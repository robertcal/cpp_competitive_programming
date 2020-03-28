#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int k, n; cin >> k >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int l = 0;

    for (int i = 0; i < n-1; ++i) {
        l = max(l, a[i+1] - a[i]);
    }

    l = max(l, (k - a[n-1] + a[0]));

    cout << k - l << endl;
}