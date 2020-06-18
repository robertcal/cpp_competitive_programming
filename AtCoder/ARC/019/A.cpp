#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;
    map<char, char> mp;
    mp['O'] = '0';
    mp['D'] = '0';
    mp['I'] = '1';
    mp['Z'] = '2';
    mp['S'] = '5';
    mp['B'] = '8';

    for (int i = 0; i < s.length(); ++i) {
        int t = s[i] - '0';
        if (t < 0 || 10 < t) {
            cout << mp[s[i]];
        } else {
            cout << s[i];
        }
    }

    cout << endl;
}