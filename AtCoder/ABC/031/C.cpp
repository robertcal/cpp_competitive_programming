#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> odd((n+1)/2 + 1, 0);
    vector<int> even(n/2 + 1, 0);

    for (int i = 0; i < (n+1)/2; i++) {
        odd[i + 1] = odd[i] + a[2 * i];
    }

    for (int i = 0; i < n/2; ++i) {
        even[i + 1] = even[i] + a[2 * i + 1];
    }

    int ans = 0;

    for (int i = 0; i < (n+1)/2; ++i) {
        int idx = 0;
        int mx = 0;

        for (int j = 1; j < n/2; ++j) {
            if (j < i) {
                if (mx < even[i] - even[j]) {
                    mx = even[i] - even[j];
                    idx = j;
                }
            } else {
                if (mx < even[j] - even[i]) {
                    mx = even[j] - even[i];
                    idx = j;
                }
            }
        }

        if (idx < i) {
            ans = max(ans, odd[i] - odd[idx]);
        } else {
            ans = max(ans, odd[idx] - odd[i]);
        }
    }

    for (int i = 0; i < n/2; ++i) {
        int idx = 0;
        int mx = 0;

        for (int j = 0; j < (n+1)/2; ++j) {
            if (j <= i) {
                if (mx < odd[i] - odd[j]) {
                    mx = odd[i] - odd[j];
                    idx = j;
                }
            } else {
                if (mx < odd[j] - odd[i]) {
                    mx = odd[j] - odd[i];
                    idx = j;
                }
            }
        }

        if (idx <= i) {
            ans = max(ans, even[i] - even[idx]);
        } else {
            ans = max(ans, even[idx] - even[i]);
        }
    }

    cout << ans << endl;
}