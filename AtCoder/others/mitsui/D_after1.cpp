#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;

    for (int i = 0; i < 1000; ++i) {
        int c[3] = {(i / 100), (i / 10 - (i / 100) * 10), (i - (i / 10) * 10)};

        int c0 = INF;
        int c1 = INF;

        for (int j = 0; j < n; ++j) {
            if (c0 == INF && s[j] - '0' == c[0]) {
                c0 = j;
                continue;
            }

            if (c0 != INF && c1 == INF && s[j] - '0' == c[1]) {
                c1 = j;
                continue;
            }

            if (c1 != INF && s[j] - '0' == c[2]) {
                ++ans;
                break;
            }
        }
    }

    cout << ans << endl;
}