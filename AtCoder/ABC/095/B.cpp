#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll N, X; cin >> N >> X;

    ll tmp = 0;

    vector<ll> m(N);
    for (int i = 0; i < N; ++i) {
        cin >> m[i];
        tmp += m[i];
    }

    sort(m.begin(), m.end());

    ll ans = N;

    tmp += m[0];

    while (tmp <= X) {
        ++ans;
        tmp += m[0];
    }

    cout << ans << endl;
}