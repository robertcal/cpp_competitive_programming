#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b; cin >> a >> b;

    if (1 <= a && a <= 9 && 1 <= b && b <= 9) {
        cout << a * b << endl;
    } else {
        cout << -1 << endl;
    }
}