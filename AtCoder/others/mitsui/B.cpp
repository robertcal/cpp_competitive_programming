#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    for (int i = 1; i <= 50000; ++i) {
        if ((int)(i * 1.08) == n) {
            cout << i << endl;
            return 0;
        }
    }

    puts(":(");
}