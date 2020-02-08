#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

string f(string s) {
    string t;

    bool continue2 = false;

    for (int i = 0; i < s.size(); ++i) {
        if (continue2) {
            continue2 = false;
            continue;
        }

        if (i == s.size()-1) {
            t += s[i];
            continue;
        }

        if (s[i] == '(' && s[i+1] == ')') {
            continue2 = true;
            continue;
        }

        t += s[i];
    }

    if (s == t) {
        return t;
    }

    return f(t);
}

int main() {

    int n; cin >> n;
    string s; cin >> s;

    string t = f(s);

    int l = 0;
    int r = 0;

    for (int i = 0; i < t.size(); ++i) {
        if (t[i] == ')') {
            ++l;
        } else {
            ++r;
        }
    }

    string ans = "";

    for (int i = 0; i < l; ++i) {
        ans += '(';
    }

    ans += s;

    for (int i = 0; i < r; ++i) {
        ans += ')';
    }

    cout << ans << endl;
}