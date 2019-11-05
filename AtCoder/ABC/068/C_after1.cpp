#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, m; cin >> n >> m;

    set<pair<int, int>> se;

    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;

        se.insert(make_pair(a, b));
    }

    for (int i = 2; i < n; ++i) {
        if (se.count(make_pair(1, i)) && se.count(make_pair(i, n))) {
            puts("POSSIBLE");
            return 0;
        }
    }

    puts("IMPOSSIBLE");
}