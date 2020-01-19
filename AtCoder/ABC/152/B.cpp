#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int a, b; cin >> a >> b;

    if (a > b) {
        for (int i = 0; i < a; ++i) {
            cout << b;
        }
    } else {
        for (int i = 0; i < b; ++i) {
            cout << a;
        }
    }

    cout << endl;
}