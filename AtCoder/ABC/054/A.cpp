#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b; cin >> a >> b;

    if (a == b) {
        puts("Draw");
        return 0;
    }

    if (a == 1) {
        puts("Alice");
        return 0;
    }

    if (b == 1) {
        puts("Bob");
        return 0;
    }

    if (a > b) {
        puts("Alice");
        return 0;
    } else {
        puts("Bob");
        return 0;
    }
}