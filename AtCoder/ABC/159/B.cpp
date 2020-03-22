#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;
    int n = s.length();

    bool ans = true;

    for (int i = 0; i < n; ++i) {
        if (s[i] != s[n-1-i]) {
            ans = false;
            break;
        }
    }

    for (int i = 0; i < (n-1)/2; ++i) {
        if (s[i] != s[(n-1)/2-1-i]) {
            ans = false;
            break;
        }
    }

    for (int i = (n+3)/2; i < n; ++i) {
        if (s[i] != s[n-1-i]) {
            ans = false;
            break;
        }
    }

    if (ans) {
        puts("Yes");
    } else {
        puts("No");
    }
}