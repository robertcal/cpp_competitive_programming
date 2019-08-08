#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll a, b, c, d; cin >> a >> b >> c >> d;

    if (abs(c - a) <= d) {
        puts("Yes");
    } else {
        if (abs(b - a) <= d && abs(c - b) <= d) {
            puts("Yes");
        } else {
            puts("No");
        }
    }
}