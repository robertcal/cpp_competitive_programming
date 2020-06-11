#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    int cnt[30] = {};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cnt[s[i][j] - 'a']++;
        }
    }

    int even_sum = 0;
    bool odd_exist = false;
    for (int i = 0; i < 30; ++i) {
        if (cnt[i] % 2 == 0) {
            even_sum += cnt[i];
        } else {
            odd_exist = true;
            even_sum += (cnt[i] - 1);
        }
    }

    if (odd_exist) {
        if (even_sum + 1 < n) {
            cout << -1 << endl;
            return 0;
        }
    } else {
        if (even_sum < n) {
            cout << -1 << endl;
            return 0;
        }
    }

    int sum = even_sum;
    if (odd_exist) sum++;

    string ans = "";
    int cancel_i = -1;
    for (int i = 0; i < 30; ++i) {
        if (cnt[i] % 2 == 1) {
            for (int j = 0; j < cnt[i]; ++j) {
                ans += 'a' + i;
                cancel_i = i;
            }
            break;
        }
    }

    for (int i = 0; i < 30; ++i) {
        if (cnt[i] == 0) continue;
        if (i == cancel_i) continue;

        string add = "";
        if (cnt[i] % 2 == 0) {
            for (int j = 0; j < cnt[i] / 2; ++j) {
                add += 'a' + i;
            }
        } else {
            for (int j = 0; j < (cnt[i] - 1) / 2; ++j) {
                add += 'a' + i;
            }
        }

        ans = add + ans + add;
    }

    int t = sum - n;
    for (int i = 0; i < t; ++i) {
        ans.erase(ans.size() / 2, 1);
    }

    cout << ans << endl;
}