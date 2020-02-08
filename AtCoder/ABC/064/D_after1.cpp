#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    int need_left = 0;
    int pointer = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            ++pointer;
        } else {
            if (pointer == 0) {
                ++need_left;
            } else {
                --pointer;
            }
        }
    }

    int need_right = pointer;

    string ans = "";
    for (int i = 0; i < need_left; ++i) {
        ans += '(';
    }

    ans += s;

    for (int i = 0; i < need_right; ++i) {
        ans += ')';
    }

    cout << ans << endl;
}