#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int dp[200010][3];
//dp[i][pre] i文字目まで使っていて、以前にpre文字分使っている
//i文字目というのは、s[i-1]文字目までに該当することに注意！！

int main() {

    string s; cin >> s;
    int n = s.length();
    s += "#####"; //文字列を長くして範囲外参照が起きないように

    for (int i = 0; i < n+1; ++i) {
        for (int j = 0; j < 3; ++j) {
            dp[i][j] = -INF;
        }
    }

    dp[0][0] = 0;

    for (int i = 0; i < n; ++i) {
        for (int pre = 0; pre < 3; ++pre) {
            for (int j = 1; j < 3; ++j) {
                if (0 <= dp[i][pre]) { //一個前の文字列が作られている
                    if (pre == j) { //一個前の文字列とこれから作る文字列の長さが同じ
                        if (j == 1) {
                            if (s[i-1] == s[i]) continue; //一個前の文字列を同じだとダメ
                        } else {
                            if (s[i-2] == s[i] && s[i-1] == s[i+1]) continue; //一個前の文字列を同じだとダメ
                        }
                    }

                    dp[i+j][j] = max(dp[i+j][j], dp[i][pre] + 1);
                }
            }
        }
    }

    cout << max(dp[n][1], dp[n][2]) << endl;
}