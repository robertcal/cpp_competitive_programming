#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    set<string> se;

    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        se.insert(s);
    }

    cout << se.size() << endl;
}