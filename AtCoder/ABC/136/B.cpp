#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll N; cin >> N;

    ll ans = 0;

    for (int i = 1; i <= N; ++i) {
        if (i >= 1 && i <= 9) {
            ++ans;
        }

        if (i >= 100 && i <= 999) {
            ++ans;
        }

        if (i >= 10000 && i <= 99999) {
            ++ans;
        }
    }

    cout << ans << endl;
}
