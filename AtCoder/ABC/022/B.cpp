#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int c[100010] = {};

int main() {

    int n; cin >> n;

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        if (c[a] >= 1) {
            ++ans;
        }

        ++c[a];
    }

    cout << ans << endl;
}