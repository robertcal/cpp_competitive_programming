#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    int r = 0;
    int b = 0;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;

        for (int j = 0; j < s.length(); ++j) {
            if (s[j] == 'R') r++;
            if (s[j] == 'B') b++;
        }
    }

    if (r > b) {
        puts("TAKAHASHI");
    } else if (r < b) {
        puts("AOKI");
    } else {
        puts("DRAW");
    }
}