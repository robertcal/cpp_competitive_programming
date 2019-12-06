#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    vector<int> r(n);
    for (int i = 0; i < n; ++i) {
        cin >> r[i];
    }

    sort(r.rbegin(), r.rend());

    double ans = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            ans += r[i] * r[i];
        } else {
            ans -= r[i] * r[i];
        }
    }

    ans *= acos(-1);

    cout << setprecision(15) <<  ans << endl;
}