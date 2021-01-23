#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    if (s == "RRR") {
        cout << 3 << endl;
    } else if (s == "SRR" || s == "RRS") {
        cout << 2 << endl;
    } else {
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == 'R') {
                cout << 1 << endl;
                return 0;
            }
        }

        cout << 0 << endl;
    }
}