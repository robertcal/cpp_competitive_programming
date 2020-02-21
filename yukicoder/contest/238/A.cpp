#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    for (int i = 0; i < s.size()-1; ++i) {
        if (s[i] == 'a' && s[i+1] == 'o') {
            s[i] = 'k';
            s[i+1] = 'i';
        }
    }

    cout << s << endl;
}