#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    vector<int> l(n);
    vector<int> r(n);

    l[0] = 0;

    for (int i = 0; i < n-1; ++i) {
        if (s[i] == 'W') {
            l[i+1] = l[i] + 1;
        } else {
            l[i+1] = l[i];
        }
    }

    r[n-1] = 0;

    for (int i = n-1; i > 0; --i) {
        if (s[i] == 'E') {
            r[i-1] = r[i] + 1;
        } else {
            r[i-1] = r[i];
        }
    }

    int ans = INF;
    for (int i = 0; i < n; ++i) {
        int res;
        res = l[i] + r[i];

        ans = min(ans, res);
    }

    cout << ans << endl;
}