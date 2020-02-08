#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;



int main() {

    int q; cin >> q;

    vector<bool> p(100010, true);

    p[0] = false;
    p[1] = false;

    for (int i = 2; i < 100010; ++i) {
        if (p[i]) {
            for (int j = i * 2; j < 100010; j += i) {
                p[j] = false;
            }
        }
    }

    vector<bool> n = p;

    for (int i = 2; i < 100010; ++i) {
        if (p[i] && !p[(i+1)/2]) {
            n[i] = false;
        }
    }

    vector<int> s(100010, 0);

    for (int i = 1; i < 100010; ++i) {
        s[i] += s[i-1];
        if (n[i]) {
            s[i] += 1;
        }
    }

    for (int i = 0; i < q; ++i) {
        int l, r; cin >> l >> r;

        cout << s[r] - s[l-1] << endl;
    }
}