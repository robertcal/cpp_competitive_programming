#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int t; cin >> t;

    for (int i = 0; i < t; ++i) {
        string s; cin >> s;

        int l = 0;
        int r = s.size()-1;

        while (l < s.size() && s[l] == '0') {
            ++l;
        }

        while (r >= 0 && s[r] == '0') {
            --r;
        }

        if (l >= r) {
            cout << 0 << endl;
            continue;
        }

        int sum = 0;

        for (int j = l; j < r+1; ++j) {
            if (s[j] == '0') {
                ++sum;
            }
        }

        cout << sum << endl;
    }
}