#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    int ans = INF;

    for (int i = 1; i <= 1000; ++i) {
        for (int j = 1; j <= 1000; ++j) {
            if (n - i * j >= 0) {
                ans = min(ans, abs(i - j) + (n - i * j));
            }
        }
    }

    cout << ans << endl;
}