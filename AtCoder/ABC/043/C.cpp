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

    int sum = accumulate(a.begin(), a.end(), 0);

    int ave = round((double)sum / (double)n);

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        ans += (a[i] - ave) * (a[i] - ave);
    }

    cout << ans << endl;
}