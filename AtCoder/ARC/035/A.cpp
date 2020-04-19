#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    bool ok = true;

    for (int i = 0; i < s.length(); ++i) {
        if (i > s.length() - 1 - i) break;

        if (s[i] == '*' || s[s.length() - 1 - i] == '*') continue;

        if (s[i] != s[s.length() - 1 - i]) {
            ok = false;
            break;
        }
    }

    if (ok) {
        puts("YES");
    } else {
        puts("NO");
    }
}