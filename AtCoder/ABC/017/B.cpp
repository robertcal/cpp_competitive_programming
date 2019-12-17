#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string x; cin >> x;

    string list[4] = {"ch", "o", "k", "u"};

    int i = 0;

    while (i < x.size()) {
        bool match = false;
        for (auto t : list) {
            if (x.substr(i, t.size()) == t) {
                i += t.size();
                match = true;
            }
        }

        if (!match) {
            puts("NO");
            return 0;
        }
    }

    puts("YES");
}