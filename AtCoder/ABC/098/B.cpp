#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll N; cin >> N;
    string S; cin >> S;

    ll ans = 0;

    for (int i = 0; i < S.size(); ++i) {
        ll cnt = 0;

        set<char> X = {};
        for (int j = 0; j <= i; ++j) {
            X.insert(S[j]);
        }

        set<char> Y = {};
        for (int k = i+1; k < S.size(); ++k) {
            Y.insert(S[k]);
        }

        for (auto x : X) {
            if (Y.find(x) != Y.end()) {
                ++cnt;
            }
        }

        ans = max(cnt, ans);
    }

    cout << ans << endl;
}