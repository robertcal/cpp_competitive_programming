#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int n, a, b; cin >> n >> a >> b;

    ll ans = 0;

    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);

        int sum = 0;
        for (int j = 0; j < s.size(); ++j) {
            sum += s[j] - '0';
        }

        if (a <= sum && sum <= b) {
            ans += i;
        }
    }

    cout << ans << endl;
}