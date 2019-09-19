#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    char x, y; cin >> x >> y;

    if (x > y) {
        puts(">");
    } else if (x == y) {
        puts("=");
    } else {
        puts("<");
    }
}