#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    ll ans = 0;
    ll sum = 0;

    sum += s[0] - '0';

    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == '+' && sum != 0) {
            ++ans;
            sum = 0;
            continue;
        }

        if (s[i-1] == '+') {
            sum += s[i] - '0';
            continue;
        }

        if (s[i-1] == '*') {
            sum *= s[i] - '0';
            continue;
        }
    }

    if (sum != 0) {
        ++ans;
    }

    cout << ans << endl;
}