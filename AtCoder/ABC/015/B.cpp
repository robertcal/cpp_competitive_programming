#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> a;
    int s = 0;

    for (int i = 0; i < n; ++i) {
        int t; cin >> t;

        if (t != 0) {
            a.push_back(t);
            s += t;
        }
    }

    cout << (s + (a.size() - 1)) / a.size() << endl;
}