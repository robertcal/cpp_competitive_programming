#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'L') {
            if (i != 0) {
                cout << ' ';
            }
            cout << '<';
            i += 4;
        } else if (s[i] == 'R') {
            if (i != 0) {
                cout << ' ';
            }
            cout << '>';
            i += 5;
        } else if (s[i] == 'A') {
            if (i != 0) {
                cout << ' ';
            }
            cout << 'A';
            i += 7;
        }
    }

    cout << endl;
}