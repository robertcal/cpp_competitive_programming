#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }

    sort(l.begin(), l.end());

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            int t = l[i] + l[j];

            auto it = lower_bound(l.begin(), l.end(), t);

            int key = it - l.begin();

            ans += max(0, key - (j+1));
        }
    }

    cout << ans << endl;
}