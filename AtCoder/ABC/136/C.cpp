#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll N; cin >> N;

    vector<ll> H(N);
    for (int i = 0; i < N; ++i) {
        cin >> H[i];
    }

    bool inc = true;

    ll m = 0;

    for (int i = 0; i < N-1; ++i) {
        if (H[i] <= H[i+1]) {
            inc = true;
            m = H[i+1];
        } else {
            if (H[i] - 1 == H[i+1] && m - 1 == H[i+1]) {
                inc = true;
            } else {
                inc = false;
                break;
            }
        }
    }

    if (inc) {
        puts("Yes");
    } else {
        puts("No");
    }
}