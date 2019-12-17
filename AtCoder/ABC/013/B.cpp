#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int a, b; cin >> a >> b;

    cout << min({abs(a - b), a + 10 - b, b + 10 - a}) << endl;
}