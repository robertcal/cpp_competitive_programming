#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int k, x; cin >> k >> x;

    for (int i = x-k+1; i < x+k; ++i) {
        cout << i << ' ';
    }

    cout << endl;
}