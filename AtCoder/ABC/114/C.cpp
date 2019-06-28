#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

long long N;

//cur:現在の値
//use:7,5,3のうちどれを使ったか
//counter:答え
void dfs(long long cur, int use, long long &counter) {
    if (cur > N) {
        return;
    }

    if (use == 0b111) {
        //7,5,3全てを使ったので、答えをインクリメント
        ++counter;
    }

    //7を加える
    dfs(10 * cur + 7, use | 0b100, counter);

    //5を加える
    dfs(10 * cur + 5, use | 0b010, counter);

    //3を加える
    dfs(10 * cur + 3, use | 0b001, counter);
}

int main() {
    cin >> N;

    long long ans = 0;

    //深さ優先探索
    dfs(0, 0b000, ans);

    cout << ans << endl;
}