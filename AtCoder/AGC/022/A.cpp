#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    vector<int> c(26, 0);
    for (int i = 0; i < s.length(); ++i) {
        c[s[i] - 'a'] = 1;
    }

    if (s.length() != 26) {
        for (int i = 0; i < 26; ++i) {
            if (c[i] == 0) {
                cout << s << char(i + 'a') << endl;
                return 0;
            }
        }
    } else {
        if (s == "zyxwvutsrqponmlkjihgfedcba") {
            cout << -1 << endl;
            return 0;
        } else {
            string ans = "";
            vector<int> done(26, 0);
            for (int i = 0; i < 26; ++i) {
                if (s[i] != char(i + 'a')) {
                    if (s[i] == 'z') {
                        ans = ans.substr(0, ans.length() - 1);
                        for (int j = 0; j < 26; ++j) {
                            if (done[j] == 0) {
                                ans += char(j + 'a');
                                break;
                            }
                        }
                    } else {
                        for (int j = 0; j < 26; ++j) {
                            if (done[j] == 0) {
                                ans += char(j + 'a');
                                break;
                            }
                        }
                    }
                    break;
                } else {
                    ans += s[i];
                    done[s[i] - 'a'] = 1;
                }
            }
            cout << ans << endl;
            return 0;
        }
    }
}