#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int w, h; cin >> w >> h;

    if (w / __gcd(w, h) == 4) {
        puts("4:3");
    } else {
        puts("16:9");
    }
}