#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int t; cin >> t;
    int n; cin >> n;

    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; ++i) {
        int t; cin >> t;
        a[i] = make_pair(t, 0);
    }

//    sort(a.rbegin(), a.rend());

    int m; cin >> m;

    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

//    sort(b.rbegin(), b.rend());

    if (n < m) {
        puts("no");
        return 0;
    }

    for (int i = 0; i < m; ++i) {
        bool match = false;

        for (int j = 0; j < n; ++j) {
            if (a[j].first <= b[i] && a[j].first + t >= b[i] && a[j].second == 0 && !match) {
                a[j].second = 1;
                match = true;
            }
        }

        if (!match) {
            puts("no");
            return 0;
        }
    }

    puts("yes");
}