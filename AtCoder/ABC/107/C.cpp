#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, K; cin >> N >> K;

    vector<pair<int, int>> x(N);
    for (int i = 0; i < N; ++i) {
        int p; cin >> p;
        x[i] = make_pair(abs(p), p);
    }

    sort(x.begin(), x.end());

    int min_x = 0;
    int max_x = 0;
    for (int i = 0; i <= K; ++i) {
        if (i == K-1 && x[K-1].first == x[K].first) {
            int t = 0;
            if (x[K-2].second > 0) {
                t = x[K-1].second > 0 ? x[K-1].second : x[K].second;
                max_x = t;
            } else {
                t = x[K-1].second < 0 ? x[K-1].second : x[K].second;
                min_x = t;
            }
            break;
        }

        if (x[i].second > 0) {
            max_x = max(max_x, x[i].second);
        } else {
            min_x = min(min_x, x[i].second);
        }
    }

    int ans = 0;
    if (max_x > abs(min_x)) {
        ans = 2 * abs(min_x) + max_x;
    } else {
        ans = 2 * max_x + abs(min_x);
    }

    cout << ans << endl;
}