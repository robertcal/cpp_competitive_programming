#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, M, X, Y; cin >> N >> M >> X >> Y;

    int max_x = -INF;
    for (int i = 0; i < N; ++i) {
        int x; cin >> x;
        max_x = max(max_x, x);
    }
    max_x = max(max_x, X);

    int min_y = INF;
    for (int j = 0; j < M; ++j) {
        int y; cin >> y;
        min_y = min(min_y, y);
    }
    min_y = min(min_y, Y);

    if (max_x < min_y) {
        cout << "No War" << endl;
    } else {
        cout << "War" << endl;
    }
}