#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int h, a; cin >> h >> a;

    if (h % a == 0) {
        cout << h / a << endl;
    } else {
        cout << h / a + 1 << endl;
    }
}