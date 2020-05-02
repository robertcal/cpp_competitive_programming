#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int k; cin >> k;
    int a, b; cin >> a >> b;

    for (int i = 1; i <= 1000; ++i) {
        int c = k * i;
        if (a <= c && c <= b) {
            puts("OK");
            return 0;
        }
    }

    puts("NG");
}