#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, m; cin >> n >> m;

    multimap<int, int> ma;

    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;

        ma.insert(make_pair(a, b));
    }


}