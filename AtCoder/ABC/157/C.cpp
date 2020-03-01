#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    vector<pair<int, int>> p(m);

    for (int i = 0; i < m; ++i) {
        int s, c; cin >> s >> c;

        p[i] = make_pair(s, c);
    }

    sort(p.begin(), p.end());

    for (int i = 0; i < m-1; ++i) {
        if (p[i].first == p[i+1].first && p[i].second != p[i+1].second) {
            cout << -1 << endl;
            return 0;
        }
    }

    for (int i = 0; i < m; ++i) {
        if (n != 1 && p[i].first == 1 && p[i].second == 0) {
            cout << -1 << endl;
            return 0;
        }
    }

    vector<int> ans;

    for (int i = 1; i <= n; ++i) {
        bool match = false;

        for (int j = 0; j < m; ++j) {
            if (i == p[j].first) {
                ans.push_back(p[j].second);
                match = true;
                break;
            }
        }

        if (!match) {
            ans.push_back(0);
        }
    }

    if (n != 1 && ans[0] == 0) {
        ans[0] = 1;
    }

    for (auto t : ans) {
        cout << t;
    }

    cout << endl;
}