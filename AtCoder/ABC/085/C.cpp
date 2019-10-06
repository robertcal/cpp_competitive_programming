#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, y; cin >> n >> y;

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (10000 * i + 5000 * j + 1000 * (n-i-j) == y && n-i-j >= 0) {
                cout << i << " " << j << " " << n-i-j << endl;
                return 0;
            }
        }
    }

    cout << "-1" << " " << "-1" << " " << "-1" << endl;
}