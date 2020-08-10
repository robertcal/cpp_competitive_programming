#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        int a, b; cin >> a >> b;

        sum += (double)(a * b);
    }

    sum *= 1.05;

    cout << (int)sum << endl;
}