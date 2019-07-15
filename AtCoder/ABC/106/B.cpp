#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    int ans = 0;
    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 0) {
            continue;
        }

        int count = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) {
                ++count;
            }
        }

        if (count == 8) {
            ++ans;
        }
    }

    cout << ans << endl;
}