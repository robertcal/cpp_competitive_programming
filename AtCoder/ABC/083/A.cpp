#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int a, b, c, d; cin >> a >> b >> c >> d;

    int l = a + b;
    int r = c + d;

    if (l > r) {
        puts("Left");
    } else if (l == r) {
        puts("Balanced");
    } else {
        puts("Right");
    }
}