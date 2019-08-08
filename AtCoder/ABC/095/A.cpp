#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    string S; cin >> S;

    ll ans = 700;

    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'o') {
            ans += 100;
        }
    }

    cout << ans << endl;
}