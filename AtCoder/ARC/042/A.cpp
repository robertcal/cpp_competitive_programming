#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int n_u[100010] = {};

int a_u[100010] = {};

int main() {

    int n, m; cin >> n >> m;

    vector<int> a(m);
    for (int i = 0; i < m; ++i) {
        cin >> a[i];

        n_u[a[i]]++;
    }

    reverse(a.begin(), a.end());

    for (int i = 0; i < m; ++i) {
        if (a_u[a[i]] > 0) {
            continue;
        }

        cout << a[i] << endl;
        a_u[a[i]]++;
    }

    for (int i = 1; i <= n; ++i) {
        if (n_u[i] == 0) {
            cout << i << endl;
        }
    }
}