#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int na, nb; cin >> na >> nb;

    set<int> se;
    for (int i = 0; i < na; ++i) {
        int a; cin >> a;
        se.insert(a);
    }

    int cnt = 0;
    for (int i = 0; i < nb; ++i) {
        int b; cin >> b;

        if (se.count(b) == 1) ++cnt;

        se.insert(b);
    }

    double ans = (double)cnt / (double)se.size();

    cout << fixed << setprecision(10) << ans << endl;
}