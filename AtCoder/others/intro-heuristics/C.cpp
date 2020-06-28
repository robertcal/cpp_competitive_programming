#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int d; cin >> d;

    vector<int> c(26);
    for (int i = 0; i < 26; ++i) {
        cin >> c[i];
    }

    vector<vector<int>> s(d, vector<int>(26));
    for (int i = 0; i < d; ++i) {
        for (int j = 0; j < 26; ++j) {
            cin >> s[i][j];
        }
    }

    vector<int> t(d);
    for (int i = 0; i < d; ++i) {
        cin >> t[i];
        t[i]--;
    }

    vector<int> score(d, 0);
    vector<vector<int>> last(d, vector<int>(26, 0));

    auto re_score = [&](int start) {
        for (int i = start; i < d; ++i) {
            score[i] = (i - 1 >= 0 ? score[i - 1] : 0) + s[i][t[i]];

            if (i - 1 >= 0) {
                last[i] = last[i - 1];
            } else {
                for (int j = 0; j < 26; ++j) {
                    last[0][j] = 0;
                }
            }

            last[i][t[i]] = i + 1;

            int j = i + 1;

            for (int k = 0; k < 26; ++k) {
                score[i] -= c[k] * (j - last[i][k]);
            }
        }
    };

    re_score(0);

    int m; cin >> m;
    vector<pair<int, int>> p(m);
    for (int i = 0; i < m; ++i) {
        int td, tq;
        cin >> td >> tq;
        td--; tq--;

        p[i] = make_pair(td, tq);
    }

    for (int i = 0; i < m; ++i) {
        t[p[i].first] = p[i].second; // d日目をqに変更

        re_score(p[i].first);

        cout << score[d - 1] << endl;
    }
}