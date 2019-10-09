#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    ll a1 = 0;
    ll a2 = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == a[i+1]) {
            if (a1 == 0) {
                a1 = a[i];
                i++;
            } else {
                a2 = a[i];
                break;
            }
        }
    }

    cout << a1 * a2 << endl;
}