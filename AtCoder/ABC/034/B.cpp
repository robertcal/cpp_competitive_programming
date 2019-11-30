#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    if (n & 1) {
        cout << n + 1 << endl;
    } else {
        cout << n - 1 << endl;
    }
}