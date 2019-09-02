#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend()); //降順ソート

    ll alice = 0;
    ll bob = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
    }

    cout << alice - bob << endl;
}