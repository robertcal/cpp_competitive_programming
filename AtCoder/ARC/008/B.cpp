#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    string name; cin >> name;
    string k; cin >> k;

    int name_cnt[26] = {};
    int k_cnt[26] = {};

    for (int i = 0; i < name.length(); ++i) {
        name_cnt[name[i] - 'A']++;
    }

    for (int i = 0; i < k.length(); ++i) {
        k_cnt[k[i] - 'A']++;
    }

    int ma = 0;

    for (int i = 0; i < 26; ++i) {
        int t;

        if (name_cnt[i] > 0 && k_cnt[i] == 0) {
            cout << -1 << endl;
            return 0;
        }

        if (k_cnt[i] == 0) continue;

        if (name_cnt[i] % k_cnt[i] == 0) {
            t = name_cnt[i] / k_cnt[i];
        } else {
            t = name_cnt[i] / k_cnt[i] + 1;
        }

        ma = max(ma, t);
    }

    cout << ma << endl;
}