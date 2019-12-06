#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a; cin >> a;

    int ans = 0;

    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= 100; ++j) {
            if (i + j == a) {
                ans = max(ans, i * j);
            }
        }
    }

    cout << ans << endl;
}