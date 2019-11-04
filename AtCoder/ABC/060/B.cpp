#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b, c; cin >> a >> b >> c;

    for (int i = 1; i <= 10000; ++i) {
        if ((a * i) % b == c) {
            puts("YES");
            return 0;
        }
    }

    puts("NO");
}