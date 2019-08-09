#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll N, M, X; cin >> N >> M >> X;

    vector<ll> A(N+1, 0);
    for (int i = 0; i < M; ++i) {
        ll p;
        cin >> p;
        ++A[p];
    }

    ll l = 0;
    ll r = 0;

    for (int i = X; i >= 0 ; --i) {
        l += A[i];
    }

    for (int i = X; i <= N; ++i) {
        r += A[i];
    }

    cout << min(l, r) << endl;
}