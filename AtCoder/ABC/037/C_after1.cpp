#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k; cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // 半開区間で累積和
    vector<long long> s(n+1);
    for (int i = 0; i < n; ++i) {
        s[i+1] = s[i] + a[i];
    }

    long long ans = 0;
    for (int i = 0; i < n-k+1; ++i) {
        ans += s[i+k] - s[i];
    }

    cout << ans << endl;

    return 0;
}