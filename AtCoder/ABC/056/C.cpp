#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int x; cin >> x;

    for (int i = 1; i < 100000; ++i) {
        if ((i * i + i) / 2 >= x) {
            cout << i << endl;
            return 0;
        }
    }
}