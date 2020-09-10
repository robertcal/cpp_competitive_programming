#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    char x; cin >> x;
    string s; cin >> s;

    for (int i = 0; i < s.length(); ++i) {
        if (x != s[i]) {
            cout << s[i];
        }
    }

    cout << endl;
}