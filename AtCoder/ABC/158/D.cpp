#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    int q; cin >> q;

    int rev_count = 0;

    string mae;
    string ato;

    for (int i = 0; i < q; ++i) {
        int t; cin >> t;

        if (t == 1) {
            ++rev_count;
        } else {
            int f; string c;
            cin >> f >> c;

            if (f == 1) {
                if (rev_count % 2 == 0) {
                    mae = c + mae;
                } else {
                    ato = ato + c;
                }
            } else {
                if (rev_count % 2 == 0) {
                    ato = ato + c;
                } else {
                    mae = c + mae;
                }
            }
        }
    }

    s = mae + s + ato;

    if (rev_count % 2 == 0) {
        cout << s << endl;
    } else {
        for (int i = 0; i < s.size(); ++i) {
            cout << s[s.size() - i - 1];
        }

        cout << endl;
    }
}