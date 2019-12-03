#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

//最後にどの桁を見たか
//現時点で何文字を残すと決めたか
//現時点で残すと決まった部分の文字列
bool dp[30010][4][1010];

int main() {

    int n; cin >> n;
    string s; cin >> s;

    dp[0][0][0] = true;

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= 3; ++j) {
            for (int k = 0; k < 1000; ++k) {
                if (dp[i][j][k] == false) {
                    continue;
                }

                dp[i+1][j][k] = true; //文字を残さない場合（消す場合）

                if (j <= 2) { //なぜこのif文が必要なのか？入れないと結果が変わる → kについて配列の範囲（1010）を超え、結果がおかしくなってしまうため
                    dp[i+1][j+1][k * 10 + (s[i] - '0')] = true; //文字を残す場合
                }
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < 1000; ++i) {
        if (dp[n][3][i] == true) {
            ++ans;
        }
    }

    cout << ans << endl;
}