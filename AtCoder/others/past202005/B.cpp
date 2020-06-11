#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int N, M, q; cin >> N >> M >> q;

    vector<vector<int>> score(N, vector<int>(M, 0));
    vector<int> cnt(M, 0);

    for (int i = 0; i < q; ++i) {
        int num; cin >> num;

        if (num == 1) {
            int sum = 0;
            int n; cin >> n;
            --n;

            for (int j = 0; j < M; ++j) {
                if (score[n][j] == 1) {
                    sum += N - cnt[j];
                }
            }

            cout << sum << endl;
        } else {
            int n, m; cin >> n >> m;
            --n; --m;

            score[n][m] = 1;
            cnt[m]++;
        }
    }
}