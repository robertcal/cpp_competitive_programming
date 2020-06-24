#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;
    int n = s.length();

    bool i = false;
    bool c = false;
    bool t = false;
    for (int j = 0; j < n; ++j) {
        if (toupper(s[j]) == 'I') i = true;
        if (i && toupper(s[j]) == 'C') c = true;
        if (i && c && toupper(s[j]) == 'T') t = true;
    }

    if (i && c && t) {
        puts("YES");
    } else {
        puts("NO");
    }
}