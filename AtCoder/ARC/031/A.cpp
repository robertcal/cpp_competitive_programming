#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string n; cin >> n;
    string r = n;
    reverse(r.begin(), r.end());

    bool ok = true;
    for (int i = 0; i < n.length(); ++i) {
        if (n[i] != r[i]) {
            ok = false;
            break;
        }
    }

    if (ok) {
        puts("YES");
    } else {
        puts("NO");
    }
}