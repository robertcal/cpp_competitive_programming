#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s, t; cin >> s >> t;

    int p = INF;

    for (int i = 0; i < s.size() - t.size() + 1; ++i) {
        if (s[i] == t[0] || s[i] == '?') {

            bool match = true;

            for (int j = 1; j < t.size(); ++j) {
                if (s[i+j] != '?' && s[i+j] != t[j]) {
                    match = false;
                    break;
                }
            }

            if (match) {
                p = i;
            }
        }
    }

    if (p == INF) {
        puts("UNRESTORABLE");
        return 0;
    }

    for (int i = 0; i < t.size(); ++i) {
        s[p+i] = t[i];
    }

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '?') {
            s[i] = 'a';
        }
    }

    cout << s << endl;
}