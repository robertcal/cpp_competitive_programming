#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'I') {
            ++cnt;
        }

        if (s[i] == 'D') {
            --cnt;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;
}