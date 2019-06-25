#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, K; cin >> N >> K;

    //スターグラフでできる最大の数
    int mx = (N-1) * (N-2) / 2;

    //最大より大きい値が入力された場合は存在しない
    if (mx < K) {
        puts("-1");
        return 0;
    }

    vector<pair<int, int>> ans;
    //最初にスターグラフを作る
    for (int i = 0; i < N-1; ++i) {
        //N番目が中心にあるとして
        ans.push_back(pair<int, int>(i+1, N)); //頂点は1から
    }

    //追加したい辺の数
    int add = mx - K;

    vector<pair<int, int>> edge;
    for (int i = 0; i < N-1; ++i) {
        for (int j = 0; j < i; ++j) {
            //辺の候補を全て列挙
            edge.push_back(pair<int, int>(i+1, j+1)); //頂点は1から
        }
    }

    //追加したい辺を追加
    for (int i = 0; i < add; ++i) {
        ans.push_back(edge[i]);
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}