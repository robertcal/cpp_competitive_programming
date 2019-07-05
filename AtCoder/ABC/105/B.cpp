#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    bool ans = false;
    for (int i = 0; i <= 25; ++i) {
        for (int j = 0; j <= 14; ++j) {
            if (4 * i + 7 * j == N) {
                ans = true;
            }
        }
    }

    if (ans) {
        puts("Yes");
    } else {
        puts("No");
    }
}