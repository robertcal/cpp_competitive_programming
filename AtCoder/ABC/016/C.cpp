#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    vector<vector<int>> p(n);

    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;;
        --a; --b;

        p[a].push_back(b);
        p[b].push_back(a);
    }

    for (int i = 0; i < n; ++i) {
        set<int> se;

        for (auto t1 : p[i]) {
            for (auto t2 : p[t1]) {
                se.insert(t2);
            }
        }

        for (auto t1 : p[i]) {
            se.erase(t1);
        }

        se.erase(i);

        cout << se.size() << endl;
    }
}