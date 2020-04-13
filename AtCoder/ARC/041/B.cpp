#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {

    int n, m; cin >> n >> m;

    vector<string> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 1; i <= n - 2; ++i) {
        for (int j = 1; j <= m - 2; ++j) {
            int mi = INF;

            for (int k = 0; k < 4; ++k) {
                int nx = i + dx[k];
                int ny = j + dy[k];

                mi = min(mi, b[nx][ny] - '0');
            }

            a[i][j] = mi;

            for (int k = 0; k < 4; ++k) {
                int nx = i + dx[k];
                int ny = j + dy[k];

                b[nx][ny] -= mi;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j];
        }

        cout << endl;
    }
}