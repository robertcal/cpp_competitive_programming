#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int h1, w1; cin >> h1 >> w1;
    int h2, w2; cin >> h2 >> w2;

    if (h1 == h2 || h1 == w2 || w1 == h2 || w1 == w2) {
        puts("YES");
    } else {
        puts("NO");
    }
}
