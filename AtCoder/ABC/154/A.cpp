#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s, t; cin >> s >> t;

    int a, b; cin >> a >> b;

    string u; cin >> u;

    if (s == u) {
        cout << a-1 << ' ' << b << endl;
    } else {
        cout << a << ' ' << b-1 << endl;
    }
}