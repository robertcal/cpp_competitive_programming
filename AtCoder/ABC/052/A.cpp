#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b, c, d; cin >> a >> b >> c >> d;

    if (a * b > c * d) {
        cout << a * b << endl;
    } else {
        cout << c * d << endl;
    }
}