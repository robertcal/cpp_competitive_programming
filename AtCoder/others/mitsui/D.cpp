#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int com3(int n) {
    return n * (n - 1) * (n - 2) / 6;
}

int com2(int n) {
    return n * (n - 1) / 2;
}

int main() {

    int n; cin >> n;
    string s; cin >> s;

    int n0 = 0;
    int n1 = 0;
    int n2 = 0;

    for (int i = 0; i < s.size()-1; ++i) {
        if (s[i] == s[i+1]) {
            ++n0;
        }
    }

    for (int i = 0; i < s.size()-2; ++i) {
        if (s[i] == s[i+2]) {
            ++n1;
        }
    }

    for (int i = 0; i < s.size()-3; ++i) {
        if (s[i] == s[i+3]) {
            ++n2;
        }
    }

    int ans = 0;

    if (n0 > 0) {
        if (n - n0 * 2 < 3) {
            ans += com3(n) - 1;
        } else {
            ans += (com3(n - n0 * 2) + (com2(n - n0 * 2) * n0) / 2);
        }
    }

    if (n1 > 0) {
        ans += (com3(n - n1) + com2(n - n1) * n1 + ((n - n1) * com2(n1) / 2));
    }

    ans -= n2;

    cout << ans << endl;
}