#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    set<int> ans;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        while (a % 2 == 0) {
            a /= 2;
        }

        ans.insert(a);
    }

    cout << ans.size() << endl;
}