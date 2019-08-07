#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    string S; cin >> S;
    ll n = S.size();
    vector<ll> ans(n);

    for (int i = 0; i < 2; ++i) {
        ll cnt = 0;
        for (int j = 0; j < n; ++j) {
            if (S[j] == 'R') {
                ++cnt;
            } else {
                ans[j] += cnt / 2;
                ans[j-1] += (cnt + 1) / 2;
                cnt = 0;
            }
        }

        reverse(ans.begin(), ans.end());
        reverse(S.begin(), S.end());

        for (int j = 0; j < n; ++j) {
            if (S[j] == 'R') {
                S[j] = 'L';
            } else {
                S[j] = 'R';
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << ' ';
    }

    cout << endl;
}