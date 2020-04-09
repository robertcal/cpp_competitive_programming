#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    int cnt = 0;

    for (int i = 1; i < 600000; ++i) {
        string t = to_string(i);
        set<char> se;
        for (int j = 0; j < t.length(); ++j) {
            se.insert(t[j]);
        }

        if (se.size() == 1) ++cnt;

        if (cnt == n) {
            cout << i << endl;
            return 0;
        }
    }
}