#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> cnt(n + 10, 0);
    for (int x = 1; x <= 110; ++x) {
        for (int y = 1; y <= 110; ++y) {
            for (int z = 1; z <= 110; ++z) {
                int s = x * x + y * y + z * z + x * y + y * z + z * x;
                if (s <= n) {
                    cnt[s]++;
                }
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << cnt[i] << endl;
    }
}