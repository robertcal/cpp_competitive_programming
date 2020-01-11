#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    vector<int> q(n);
    for (int i = 0; i < n; ++i) {
        cin >> q[i];
    }

    vector<int> t;
    for (int i = 0; i < n; ++i) {
        t.push_back(i+1);
    }

    int pn = 0;
    int qn = 0;

    int num = 1;

    do {
        if (t == p) {
            pn = num;
        }

        if (t == q) {
            qn = num;
        }

        ++num;
    } while (next_permutation(t.begin(), t.end()));

    cout << abs(pn - qn) << endl;
}