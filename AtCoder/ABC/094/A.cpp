#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll A, B, X; cin >> A >> B >> X;

    if (X < A) {
        puts("NO");
    } else {
        if (X > A + B) {
            puts("NO");
        } else {
            puts("YES");
        }
    }
}
