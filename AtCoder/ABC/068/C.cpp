#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, m; cin >> n >> m;

    multimap<int, int> ma;

    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;

        ma.insert(make_pair(a, b));
    }

    vector<int> t;

    auto p = ma.equal_range(1);
    for (auto it = p.first; it != p.second; ++it) {
        t.push_back(it->second);
    }

    for (int i = 0; i < t.size(); ++i) {
        auto p = ma.equal_range(t[i]);
        for (auto it = p.first; it != p.second; ++it) {
            if (it->second == n) {
                puts("POSSIBLE");
                return 0;
            }
        }
    }

    puts("IMPOSSIBLE");
}