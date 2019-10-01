#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b, c; cin >> a >> b >> c;

    if (a == b) {
        cout << c << endl;
        return 0;
    }

    if (a == c) {
        cout << b << endl;
        return 0;
    }

    if (b == c) {
        cout << a << endl;
        return 0;
    }
}
