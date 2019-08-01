#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    string S; cin >> S;
    ll K; cin >> K;

    ll t = 0;
    ll ans = 1;

    for (int i = 0; i < 100; ++i) {
        if (S[i] - '0' > 1) {
            t = i + 1;
            ans = S[i] - '0';
            break;
        }
    }

    if (t <= K) {
        cout << ans << endl;
    } else {
        cout << 1 << endl;
    }
}