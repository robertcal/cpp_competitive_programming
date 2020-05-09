#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;
    int r, s, p; cin >> r >> s >> p;
    string t; cin >> t;

    map<char, char> mp;
    mp['r'] = 'p';
    mp['s'] = 'r';
    mp['p'] = 's';

    for (int i = 0; i < t.length(); ++i) {
        t[i] = mp[t[i]];
    }

    for (int i = 0; i < k; ++i) {
        int tmp = i;
        while (tmp < n) {
            if (tmp + k < n && t[tmp] == t[tmp + k]) {
                t[tmp + k] = 'x';
            }

            tmp += k;
        }
    }

    map<char, int> point;
    point['r'] = r;
    point['s'] = s;
    point['p'] = p;
    point['x'] = 0;

    int ans = 0;
    for (int i = 0; i < t.length(); ++i) {
        ans += point[t[i]];
    }

    cout << ans << endl;
}