#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, -1, 0, 1};

int h, w;
vector<string> f;
int sh, sw, gh, gw;
bool seen[510][510]; //マスを検知したかどうか

void dfs(int height, int width) {
    stack<pair<int, int>> s;

    s.push(pair<int, int>(height, width)); //スタート地点をスタックに入れる
    seen[height][width] = true; //スタート地点は検知済みに

    while (!s.empty()) {
        pair<int, int> p = s.top(); s.pop(); //スタックから取り出す

        //4方向をループ
        for (int i = 0; i < 4; ++i) {
            //移動した後の点を(nh, nw)とする
            int nh = p.first + dh[i];
            int nw = p.second + dw[i];

            //移動できる場所か判定
            if (0 <= nh && nh < h && 0 <= nw && nw < w && f[nh][nw] != '#' && !seen[nh][nw]) {
                //移動できる場合はスタックに入れて、そのマスを検知に
                s.push(pair<int, int>(nh, nw));
                seen[nh][nw] = true;

                //4方向をスタックに入れているが、正しい深さ優先探索になっている？？
            }
        }
    }
}

int main() {

    cin >> h >> w;

    for (int i = 0; i < h; ++i) {
        string s; cin >> s;
        f.push_back(s);
    }

    //sとgのマスを特定
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (f[i][j] == 's') {
                sh = i;
                sw = j;
            }

            if (f[i][j] == 'g') {
                gh = i;
                gw = j;
            }
        }
    }

    //配列を初期化
    for (int i = 0; i < 510; ++i) {
        for (int j = 0; j < 510; ++j) {
            seen[i][j] = false;
        }
    }

    dfs(sh, sw); //深さ優先探索を実行

    if (seen[gh][gw]) {
        puts("Yes");
    } else {
        puts("No");
    }
}