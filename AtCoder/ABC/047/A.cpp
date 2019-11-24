#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b, c; cin >> a >> b >> c;

    if (a == b + c || b == c + a || c == a + b) {
        puts("Yes");
    } else {
        puts("No");
    }
}