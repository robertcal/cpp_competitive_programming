#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k; cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // 閉区間で累積和
    vector<long long> s(n, 0);
    s[0] = a[0];
    for (int i = 0; i < n-1; ++i) {
        s[i+1] = s[i] + a[i+1];
    }

    long long ans = 0;
    ans += s[k-1];
    for (int i = 0; i < n-k; ++i) {
        ans += s[i+k] - s[i];
    }

    cout << ans << endl;

    return 0;
}