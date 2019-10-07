#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, k; cin >> n >> k;

    map<int, int> ma;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        ma[a]++;
    }

    int ans = 0;

    if (ma.size() <= k) {
        cout << 0 << endl;
        return 0;
    } else {
        int target = 1;

        while (ma.size() > k) {
            for (auto m : ma) {
                if (m.second == target) {
                    ans += target;
                    ma.erase(m.first);

                    if (ma.size() == k) {
                        break;
                    }
                }
            }

            target++;
        }
    }

    cout << ans << endl;
}