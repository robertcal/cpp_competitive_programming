#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, m; cin >> n >> m;

    int c[55] = {0};

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        --a; --b;

        c[a]++;
        c[b]++;
    }

    for (int i = 0; i < n; ++i) {
        cout << c[i] << endl;
    }
}