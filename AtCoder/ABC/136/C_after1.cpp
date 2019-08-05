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

    ll pre = -1;

    for (int i = 0; i < N; ++i) {
        if (pre <= H[i] - 1) { //1減らせるなら、減らした方が後の選択肢が多い
            pre = H[i] - 1;
        } else if (pre <= H[i]) {
            pre = H[i];
        } else {
            puts("No");
            return 0;
        }
    }

    puts("Yes");
}
