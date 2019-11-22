#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int k, s; cin >> k >> s;

    int ans = 0;

    for (int i = 0; i <= k; ++i) {
        for (int j = 0; j <= k; ++j) {
            if (0 <= s - i - j && s - i - j <= k) {
                ++ans;
            }
        }
    }

    cout << ans << endl;
}