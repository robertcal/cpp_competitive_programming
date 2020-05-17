#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    int t = n % 10;

    if (t == 3) {
        puts("bon");
    } else if (t == 0 || t == 1 || t == 6 || t == 8) {
        puts("pon");
    } else {
        puts("hon");
    }
}