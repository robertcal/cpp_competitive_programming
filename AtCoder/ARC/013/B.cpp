#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int c; cin >> c;

    int l1 = 0;
    int l2 = 0;
    int l3 = 0;
    for (int i = 0; i < c; ++i) {
        vector<int> l(3);
        cin >> l[0] >> l[1] >> l[2];

        sort(l.begin(), l.end());

        l1 = max(l1, l[0]);
        l2 = max(l2, l[1]);
        l3 = max(l3, l[2]);
    }

    cout << l1 * l2 * l3 << endl;
}