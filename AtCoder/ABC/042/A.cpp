#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b, c; cin >> a >> b >> c;

    if ((a == 7 && b == 5 && c == 5) || (a == 5 && b == 7 && c == 5) || (a == 5 && b == 5 && c == 7)) {
        puts("YES");
    } else {
        puts("NO");
    }
}