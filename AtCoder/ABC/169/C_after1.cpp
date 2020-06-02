#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll a; cin >> a;
    string b; cin >> b;

    string c = "";
    for (int i = 0; i < b.length(); ++i) {
        if (0 <= b[i] - '0' && b[i] - '0' <= 9) {
            c += b[i];
        }
    }

    cout << a * stoll(c) / 100 << endl;
}