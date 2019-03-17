#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, T; cin >> N >> T;
    int min_cost = INF;

    for (int i = 0; i < N; ++i) {
        int c, t;
        cin >> c >> t;

        if (t <= T) {
            min_cost = min(min_cost, c);
        }
    }

    if (min_cost == INF) {
        cout << "TLE" << endl;
    } else {
        cout << min_cost << endl;
    }
}
