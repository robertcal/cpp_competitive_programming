#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<string> t;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        reverse(s.begin(), s.end());

        t.push_back(s);
    }

    sort(t.begin(), t.end());

    for (int i = 0; i < n; ++i) {
        reverse(t[i].begin(), t[i].end());

        cout << t[i] << endl;
    }
}