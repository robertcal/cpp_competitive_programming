#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int n, k; cin >> n >> k;

    int a_1 = 0;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (a == 1) {
            a_1 = i;
            break;
        }
    }

    int ans = INF;

    ans = (a_1 + 1) / (k - 1) + (n - a_1) / (k - 1);

    cout << ans << endl;
}