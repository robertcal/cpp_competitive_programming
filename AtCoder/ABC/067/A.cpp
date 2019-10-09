#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b; cin >> a >> b;

    if (a % 3 == 0 || b % 3 == 0 || (a+b) % 3 == 0) {
        puts("Possible");
    } else {
        puts("Impossible");
    }
}