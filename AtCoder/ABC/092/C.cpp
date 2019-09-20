#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    set<int> se;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        se.insert(a[i]);
    }

    for (int i = 0; i < n; ++i) {
        set<int> t;
        t = se;
        t.erase(a[i]);

        int b = *t.begin();
        int e = *t.rbegin();

        if (b >= 0 && e >= 0) {
            cout << 2 * e << endl;
        } else if (b < 0 && e < 0) {
            cout << 2 * abs(b) << endl;
        } else {
            cout << 2 * abs(b) + 2 * e << endl;
        }
    }
}