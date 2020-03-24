
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> b(n-1);
    for (int i = 0; i < n-1; ++i) {
        cin >> b[i];
    }

    vector<int> ans(n);
    ans[0] = b[0];

    for (int i = 1; i < n-1; ++i) {
        ans[i] = min(b[i-1], b[i]);
    }

    ans[n-1] = b[n-2];

    int s = 0;
    for (int i = 0; i < n; ++i) {
        s += ans[i];
    }

    cout << s << endl;
}