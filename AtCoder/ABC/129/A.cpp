#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int P, Q, R; cin >> P >> Q >> R;

    cout << P + Q + R - max({P, Q, R}) << endl;
}