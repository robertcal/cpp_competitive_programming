#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {

    vector<string> a(10);
    for (int i = 0; i < 10; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            bool ok = true;

            if (a[i][j] == 'o') continue;

            int cnt[10][10] = {};
            cnt[i][j] = 1;
            queue<pair<int, int>> que;
            que.push(make_pair(i, j));

            while (!que.empty()) {
                auto p = que.front(); que.pop();

                for (int k = 0; k < 4; ++k) {
                    int nx = p.first + dx[k];
                    int ny = p.second + dy[k];

                    if (nx < 0 || 9 < nx || ny < 0 || 9 < ny) continue;
                    if (a[nx][ny] == 'x') continue;
                    if (cnt[nx][ny] == 1) continue;

                    cnt[nx][ny] = 1;
                    que.push(make_pair(nx, ny));
                }
            }

            for (int k = 0; k < 10; ++k) {
                for (int l = 0; l < 10; ++l) {
                    if (a[k][l] == 'x') continue;
                    if (a[k][l] == 'o' && cnt[k][l] == 0) {
                        ok = false;
                        break;
                    }
                }
            }

            if (ok) {
                puts("YES");
                return 0;
            }
        }
    }

    puts("NO");
}