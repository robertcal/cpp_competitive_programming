#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    vector<int> b(4);
    for (int i = 0; i < 4; ++i) {
        cin >> b[i];
    }

    for (int i = 0; i <= s.length(); ++i) {
        if (i >= 1) {
            cout << s[i-1];
        }

        for (int j = 0; j < 4; ++j) {
            if (i == b[j]) {
                cout << '"';
            }
        }
    }

    cout << endl;
}