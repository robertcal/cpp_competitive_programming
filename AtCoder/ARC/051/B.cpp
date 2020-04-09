#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int k; cin >> k;

    int f[100];

    f[0] = 1; f[1] = 1;
    for (int i = 0; i < 98; ++i) {
        f[i + 2] = f[i + 1] + f[i];
    }

    cout << f[k + 1] << " " << f[k] << endl;
}