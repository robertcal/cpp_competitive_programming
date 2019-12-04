#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    ll ans = 0;
    bool isZero = false;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '+') {
            if (!isZero) {
                ++ans;
            }
            isZero = false;
            continue;
        }

        if (s[i] == '0') {
            isZero = true;
        }
    }

    if (!isZero) {
        ++ans;
    }

    cout << ans << endl;
}