#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b, n; cin >> a >> b >> n;

    int lcm = a * b / __gcd(a, b);

    if (lcm >= n) {
        cout << lcm << endl;
    } else {
        cout << lcm * ((n + lcm - 1) / lcm) << endl;
    }
}