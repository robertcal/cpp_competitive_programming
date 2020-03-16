#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, d; cin >> n >> d;

    int t = d + d + 1;

    cout << (n + (t - 1)) / t << endl;
}