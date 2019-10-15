#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = INF;

    int cur = 1;

    for (int i = 1; i <= n; ++i) {
        --cur;

        if (a[cur] == 2) {
            ans = i;
            break;
        }

        cur = a[cur];
    }

    if (ans == INF) {
        puts("-1");
    } else {
        cout << ans << endl;
    }
}