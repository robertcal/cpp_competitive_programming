#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> w(n);
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }

    vector<int> box(n, INF);

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            //勝手に軽い山に乗せられる
            if (box[j] >= w[i]) {
                box[j] = w[i];
                ans = max(ans, j + 1);
                break;
            }
        }
    }

    cout << ans << endl;
}