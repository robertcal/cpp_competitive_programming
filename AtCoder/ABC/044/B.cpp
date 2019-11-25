#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string w; cin >> w;

    int a[30] = {};

    for (int i = 0; i < w.size(); ++i) {
        ++a[w[i] - 'a'];
    }

    for (int i = 0; i < 30; ++i) {
        if (a[i] % 2 != 0) {
            puts("No");
            return 0;
        }
    }

    puts("Yes");
}