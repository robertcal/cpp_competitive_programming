#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll x, a, b; cin >> x >> a >> b;

    if (a >= b) {
        puts("delicious");
    } else if (b-a <= x) {
        puts("safe");
    } else {
        puts("dangerous");
    }
}