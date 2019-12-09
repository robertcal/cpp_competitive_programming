#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;
    int a, b; cin >> a >> b;

    set<int> se;
    se.insert(a);
    se.insert(b);

    int k; cin >> k;
    for (int i = 0; i < k; ++i) {
        int p; cin >> p;

        if (se.count(p) == 1) {
            puts("NO");
            return 0;
        } else {
            se.insert(p);
        }
    }

    puts("YES");
}