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
    int odd_max = 0;
    char odd_max_c;
    for (int i = 0; i < 30; ++i) {
        if (cnt[i] % 2 == 0) {
            even_sum += cnt[i];
        } else {
            if (odd_max < cnt[i]) {
                odd_max = cnt[i];
                odd_max_c = 'a' + i;
            }
        }
    }

    if (even_sum + odd_max < n) {
        cout << -1 << endl;
        return 0;
    }

    if (even_sum < n && n % 2 == 0) {
        cout << -1 << endl;
        return 0;
    }

    string ans = "";
    if (even_sum >= n) {
        int t = even_sum - n;
        for (int i = 0; i < 30; ++i) {
            if (cnt[i] % 2 == 0) {
                if (t == 0) {
                    string add = "";
                    for (int j = 0; j < cnt[i] / 2; ++j) {
                        add += 'a' + i;
                    }

                    ans = add + ans + add;
                    continue;
                }

                if (cnt[i] < t) {
                    t -= cnt[i];
                } else {
                    for (int j = 0; j < t; ++j) {
                        ans += 'a' + i;
                    }
                    t = 0;
                }
            }
        }
    } else {
        int t = n - even_sum;
        for (int i = 0; i < t; ++i) {
            ans += odd_max_c;
        }

        for (int i = 0; i < 30; ++i) {
            if (cnt[i] % 2 == 0) {
                string add = "";
                for (int j = 0; j < cnt[i] / 2; ++j) {
                    add += 'a' + i;
                }

                ans = add + ans + add;
            }
        }
    }

    cout << ans << endl;
}