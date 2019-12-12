#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;
    int k; cin >> k;

    set<string> se;

    for (int i = 1; i <= s.size(); ++i) { //何文字か
        for (int j = 0; j <= s.size()-i; ++j) { //何文字目からか
            string st = "";
            for (int l = 0; l < i; ++l) {
                if (j + l > s.size() - 1) {
                    break;
                } else {
                    st += s[j+l];
                }
            }

            se.insert(st);
        }
    }

    int i = 0;

    for (auto t : se) {
        ++i;
        if (i == k) {
            cout << t << endl;
            return 0;
        }
    }
}