#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s, t; cin >> s >> t;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != t[i]) {
            puts("No");
            return 0;
        }
    }

    puts("Yes");
}