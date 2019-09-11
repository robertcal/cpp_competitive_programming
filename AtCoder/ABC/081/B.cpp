#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    int ans = INF;

    for (int i = 0; i < n; ++i) {
        ll a; cin >> a;

        if (a % 2 != 0) {
            ans = 0;
            break;
        }

        int tmp = 0;

        while (a % 2 == 0) {
            a /= 2;
            ++tmp;
        }

        ans = min(ans, tmp);
    }

    cout << ans << endl;
}