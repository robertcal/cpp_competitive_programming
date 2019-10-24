#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    int sum = 0;

    vector<int> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        sum += s[i];
    }

    sort(s.begin(), s.end());

    if (sum % 10 != 0) {
        cout << sum << endl;
        return 0;
    }

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] % 10 != 0) {
            ans = max(ans, sum - s[i]);
        }
    }

    cout << ans << endl;
}
