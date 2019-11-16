#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b; cin >> a >> b;

    if (a + b >= 24) {
        cout << a + b - 24 << endl;
    } else {
        cout << a + b << endl;
    }
}