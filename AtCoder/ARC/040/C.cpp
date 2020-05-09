#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int dx[2] = {0, 1};
int dy[2] = {1, 0};

int main() {

    int n; cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (s[i][j] == 'o') continue;

            queue<pair<int, int>> q;
            s[i][j] = 'o';
            q.push(make_pair(i, j));

            bool down = false;
            while (!q.empty()) {
                auto p = q.front(); q.pop();

                for (int k = 0; k < 2; ++k) {
                    if (down && k == 1) continue;

                    int nx = p.first + dx[k];
                    int ny = p.second + dy[k];

                    if (n <= nx || n <= ny) continue;
                    if (k == 0 && s[nx][ny] == 'o' && !down && nx + 1 < n && s[nx + 1][ny - 1] == '.') continue;

                    s[nx][ny] = 'o';
                    if (k == 1) down = true;
                    q.push(make_pair(nx, ny));
                    break;
                }
            }

            ans++;
        }
    }

    cout << ans << endl;
}