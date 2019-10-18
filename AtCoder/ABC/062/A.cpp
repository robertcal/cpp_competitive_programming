#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int x, y; cin >> x >> y;

    int a[13] = {};
    a[1] = 1;
    a[3] = 1;
    a[5] = 1;
    a[7] = 1;
    a[8] = 1;
    a[10] = 1;
    a[12] = 1;

    a[4] = 2;
    a[6] = 2;
    a[9] = 2;
    a[11] = 2;

    a[2] = 3;

    if (a[x] == a[y]) {
        puts("Yes");
    } else {
        puts("No");
    }
}