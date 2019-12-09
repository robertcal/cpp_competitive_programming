#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    int sum = 0;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % n != 0) {
        puts("-1");
    } else {
        int t = sum / n;

        int d = 0;
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            d += t - a[i];
            if (d != 0) {
                ++ans;
            }
        }

        cout << ans << endl;
    }
}