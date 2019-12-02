#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;

    for (int i = 0; i < 1000; ++i) {
        int c[3] = {i / 100, (i / 10) % 10, i % 10};

        int f = 0;
        for (int j = 0; j < n; ++j) {
            if (s[j] == c[f] + '0') {
                ++f;
            }

            if (f == 3) {
                ++ans;
                break;
            }
        }
    }

    cout << ans << endl;
}