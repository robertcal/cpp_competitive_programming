#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int R, G, B, N; cin >> R >> G >> B >> N;

    int ans = 0;

    for (int i = 0; i <= N/R; ++i) {
        for (int j = 0; j <= N/G; ++j) {
            if ((N - R * i - G * j) % B == 0 && (N - R * i - G * j) / B >= 0) {
                ++ans;
            }
        }
    }

    cout << ans << endl;
}