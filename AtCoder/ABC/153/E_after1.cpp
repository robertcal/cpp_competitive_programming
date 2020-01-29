#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

//dp[i][j]
//i番目までの魔法を使い、モンスターの体力をj減らす場合の、消費魔法の最小値
int dp[1010][10010];

int main() {

    int h, n; cin >> h >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }

    //初期化
    for (int i = 0; i < 1010; ++i) {
        for (int j = 0; j < 10010; ++j) {
            dp[i][j] = INF;
        }
    }


}