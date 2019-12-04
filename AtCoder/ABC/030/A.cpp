#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    double a, b, c, d; cin >> a >> b >> c >> d;

    if (b/a > d/c) {
        puts("TAKAHASHI");
        return 0;
    }

    if (d/c > b/a) {
        puts("AOKI");
        return 0;
    }

    puts("DRAW");
}