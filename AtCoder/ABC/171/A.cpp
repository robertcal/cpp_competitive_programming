#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    char a; cin >> a;

    int t = a - 'a';

    if (0 <= t && t <= 26) {
        puts("a");
    } else {
        puts("A");
    }
}