#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

const ll D = 60; //2^60でkを上回る
const ll MAX_N = 200005;
ll to[D][MAX_N] = {};

int main() {

    ll n, k; cin >> n >> k;

    //ダブリングで解く
    //to[i][j]: jから2^i先がどの点になるのか
    for (int i = 0; i < n; ++i) {
        cin >> to[0][i];
        to[0][i]--; //0-index
    }

    for (int i = 0; i < D - 1; ++i) {
        for (int j = 0; j < n; ++j) {
            to[i + 1][j] = to[i][to[i][j]]; //to[i][j]を2回繰り返すだけ
        }
    }

    int v = 0; //最初の位置
    for (int i = D - 1; i >= 0; --i) { //2^60乗でkを超えるので、2^59以下で行き先は表せる
        ll l = 1ll << i; //l個先
        if (l <= k) {
            v = to[i][v];
            k -= l;
        }
    }

    cout << v + 1 << endl; //0-indexにしていたので、戻す
}