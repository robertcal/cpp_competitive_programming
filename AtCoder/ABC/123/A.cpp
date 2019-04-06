#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    int k; cin >> k;

    if (e - a <= k) {
        cout << "Yay!" << endl;
    } else {
        cout << ":(" << endl;
    }
}