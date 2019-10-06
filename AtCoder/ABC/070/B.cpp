#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b, c, d; cin >> a >> b >> c >> d;

    int t[110] = {0};

    for (int i = a; i <= b; ++i) {
        t[i]++;
    }

    for (int i = c; i <= d; ++i) {
        t[i]++;
    }

    int ans = 0;

    for (int ti : t) {
        if (ti == 2) {
            ++ans;
        }
    }

    cout << max(ans-1, 0) << endl;
}