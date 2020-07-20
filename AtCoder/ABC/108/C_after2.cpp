#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;

    int ans = 0;
    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {
            for (int c = b; c <= n; ++c) {
                if ((a + b) % k == 0 && (b + c) % k == 0 && (c + a) % k == 0) {
                    set<int> se;
                    se.insert(a);
                    se.insert(b);
                    se.insert(c);

                    if (se.size() == 3) {
                        ans += 6;
                    } else if (se.size() == 2) {
                        ans += 3;
                    } else {
                        ans += 1;
                    }
                }
            }
        }
    }

    cout << ans << endl;
}