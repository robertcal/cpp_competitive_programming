#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    bool ok = true;

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 != 0) {
            continue;
        } else {
            if (a[i] % 3 == 0 || a[i] % 5 == 0) {
                continue;
            } else {
                ok = false;
                break;
            }
        }
    }

    if (ok) {
        puts("APPROVED");
    } else {
        puts("DENIED");
    }
}