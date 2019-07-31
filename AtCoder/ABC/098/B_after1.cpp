#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll N; cin >> N;
    string S; cin >> S;

    ll ans = 0;

    for (int i = 0; i < S.size(); ++i) {

        vector<ll> l(30, 0);
        vector<ll> r(30, 0);

        ll tmp = 0;

        for (int j = 0; j <= i; ++j) {
            ++l[S[j] - 'a'];
        }

        for (int j = i+1; j < S.size(); ++j) {
            ++r[S[j] - 'a'];
        }

        for (int j = 0; j < 30; ++j) {
            if (l[j] > 0 && r[j] > 0) {
                ++tmp;
            }
        }

        ans = max(tmp, ans);
    }

    cout << ans << endl;
}