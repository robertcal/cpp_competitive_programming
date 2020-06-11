#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    vector<int> t(n, 0);
    for (int i = 0; i < m; ++i) {
        int a; cin >> a;

//        reverse(t.begin(), t.end());
        auto it = lower_bound(t.begin(), t.end(), a);

        int key = it - t.begin();
//        key = n - key;

//        reverse(t.begin(), t.end());

        if (key == 0) {
            cout << -1 << endl;
        } else {
            cout << n - key + 1 << endl;
            t[key - 1] = a;
        }
    }
}