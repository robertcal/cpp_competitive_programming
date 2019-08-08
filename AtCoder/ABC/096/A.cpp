#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll a, b; cin >> a >> b;

    if (a <= b) {
        cout << a << endl;
    } else {
        cout << a - 1 << endl;
    }
}