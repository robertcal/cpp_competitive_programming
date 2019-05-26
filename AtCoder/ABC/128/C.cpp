#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, M; cin >> N >> M;

    vector<int> k(M);
    vector<vector<int>> s(M);
    vector<int> p(M);

    for (int i = 0; i < M; ++i) {
        cin >> k[i];

        for (int j = 0; j < k[i]; ++j) {
            int S;
            cin >> S;

            s[i].push_back(S);
        }
    }

    for (int i = 0; i < M; ++i) {
        cin >> p[i];
    }

    int ans = 0;

    for (int bit = 0; bit < (1 << N); ++bit) { //2^Nのbit全探索

        bool ok = true;

        for (int i = 0; i < M; ++i) {

            int on = 0;

            for (int j = 0; j < N; ++j) {
                if (bit & (1 << j)) {
                    for (int l = 0; l < k[i]; ++l) {
                        if (s[i][l] == j + 1) {
                            ++on;
                        }
                    }
                }
            }

            if (on % 2 != p[i]) {
                ok = false;
            }
        }

        if (ok) {
            ++ans;
        }
    }

    cout << ans << endl;
}