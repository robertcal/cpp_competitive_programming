#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int k; cin >> k;

    int x = 7 % k;
    set<int> s;

    int count = 1;
    while (s.count(x) == 0) {
        if (x == 0) {
            cout << count << endl;
            return 0;
        }

        s.insert(x);
        x = (x * 10 + 7) % k;
        ++count;
    }

    cout << -1 << endl;
}