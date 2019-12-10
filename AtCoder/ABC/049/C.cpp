#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    string t = "";

    for (int i = s.size()-1; i >= 0; --i) {
        t += s[i];

        if (t.size() == 8) {
            puts("NO");
            return 0;
        }

        if (t.size() == 7 && t == "remaerd") {
            t = "";
        }

        if (t.size() == 6 && t == "resare") {
            t = "";
        }

        if (t.size() == 5 && (t == "maerd" || t == "esare")) {
            t = "";
        }
    }

    if (t == "") {
        puts("YES");
    } else {
        puts("NO");
    }
}