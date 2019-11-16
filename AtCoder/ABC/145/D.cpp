#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

ll dx[2] = {1, 2};
ll dy[2] = {2, 1};

ll t[1000010][1000010];

int main() {

    ll x, y; cin >> x >> y;

    for (ll i = 0; i <= x; ++i) {
        for (ll j = 0; j <= y; ++j) {
            t[i][j] = 0;
        }
    }

    queue<pair<ll, ll>> que;

    que.push(make_pair(0, 0));

    while (!que.empty()) {
        pair<ll, ll> p = que.front();
        que.pop();

//        if (p.first > x || p.second > y) {
//            continue;
//        }

        for (int i = 0; i < 2; ++i) {
            ll nx = p.first + dx[i];
            ll ny = p.second + dy[i];

            if (nx <= x && ny <= y) {
                que.push(make_pair(nx, ny));
            }

            t[nx][ny]++;
            t[nx][ny] = t[nx][ny] % 1000000007;
        }
    }

    cout << t[x][y] << endl;
}