#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

//実は嘘解法みたい
//ABABBABAとか

int main() {

    int n; cin >> n;
    string s; cin >> s;

    string sd[16] = {"AA", "AB", "AX", "AY", "BA", "BB", "BX", "BY", "XA", "XB", "XX", "XY", "YA", "YB", "YX", "YY"};

    int ans = s.length();

    for (int i = 0; i < 16; ++i) {
        for (int j = 0; j < 16; ++j) {
            if (i == j) continue;

            string t = s;

            auto pos1 = t.find(sd[i]);
            while (pos1 != string::npos) {
                t.replace(pos1, 2, "L");
                pos1 = t.find(sd[i], pos1 + 1); //第2引数はn文字目からの検索となる(1始まり)
            }

            auto pos2 = t.find(sd[j]);
            while (pos2 != string::npos) {
                t.replace(pos2, 2, "R");
                pos2 = t.find(sd[j], pos2 + 1);
            }

            ans = min(ans, (int)t.length()); //第2引数はn文字目からの検索となる(1始まり)
        }
    }

    cout << ans << endl;
}