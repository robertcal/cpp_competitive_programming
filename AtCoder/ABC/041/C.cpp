#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i) {
        int t; cin >> t;
        a[i] = make_pair(t, i+1);
    }

    sort(a.rbegin(), a.rend());

    for (int i = 0; i < n; ++i) {
        cout << a[i].second << endl;
    }
}