#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, x; cin >> n >> x;

    if (n / 2 >= x) {
        cout << x - 1 << endl;
    } else {
        cout << n - x << endl;
    }
}