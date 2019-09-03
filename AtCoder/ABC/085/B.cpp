#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    set<int> d;
    for (int i = 0; i < n; ++i) {
        int r; cin >> r;
        d.insert(r);
    }

    cout << d.size() << endl;
}