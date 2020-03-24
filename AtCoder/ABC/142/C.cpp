#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<pair<int, int>> m(n);
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        m[i] =  make_pair(a, i+1);
    }

    sort(m.begin(), m.end());

    for (int i = 0; i < n; ++i) {
        cout << m[i].second << " ";
    }

    cout << endl;
}