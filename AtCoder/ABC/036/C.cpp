#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    set<int> se;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        se.insert(a[i]);
    }

    map<int, int> ma;
    int count = 0;

    for (auto s : se) {
        ma[s] = count;
        ++count;
    }

    for (int i = 0; i < n; ++i) {
        cout << ma[a[i]] << endl;
    }
}