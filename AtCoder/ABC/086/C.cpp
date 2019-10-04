#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    vector<int> t(n);
    vector<int> x(n);
    vector<int> y(n);

    for (int i = 0; i < n; ++i) {
        cin >> t[i] >> x[i] >> y[i];
    }

    bool ans = true;

    if (t[0] != x[0] + y[0]) {
        ans = false;
    }

    for (int i = 1; i < n; ++i) {
        if ((t[i] - t[i-1]) < (abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]))) {
            ans = false;
            break;
        }

        if((t[i] - t[i-1]) - (abs(x[i] - x[i-1]) + abs(y[i] - y[i-1])) % 2 == 1) {
            ans = false;
            break;
        }
    }

    if (ans) {
        puts("Yes");
    } else {
        puts("No");
    }
}