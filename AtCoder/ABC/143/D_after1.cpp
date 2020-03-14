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

    //しゃくとり法
    for (int i = 0; i < n; ++i) {
        int k = i + 1;

        for (int j = i+1; j < n; ++j) {
            while (k < n && l[k] < l[i] + l[j]) {
                ++k;
            }

            //半開区間で考える
            ans += k - (j+1);
        }
    }

    cout << ans << endl;
}