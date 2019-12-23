#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int a, b; cin >> a >> b;
    --a; --b;

    int c[3] = {};

    c[a]++;
    c[b]++;

    for (int i = 0; i < 3; ++i) {
        if (c[i] == 0) {
            cout << i+1 << endl;
            return 0;
        }
    }
}