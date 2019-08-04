#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll A, B, C; cin >> A >> B >> C;

    ll t;
    t = C - (A - B);

    if (t > 0) {
        cout << t << endl;
    } else {
        puts("0");
    }
}