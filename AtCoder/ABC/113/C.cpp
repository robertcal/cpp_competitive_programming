#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, M; cin >> N >> M;

    vector<vector<pair<int, int>>> city(1e5+1); //ここの数に注意
    for (int i = 0; i < M; ++i) {
        int P, Y;
        cin >> P >> Y;
        --P;
        city[P].push_back({Y, i});
    }

    vector<pair<int, int>> ans(M);
    for (int i = 0; i < N; ++i) {
        //県の中でソート
        sort(city[i].begin(), city[i].end());

        for (int j = 0; j < city[i].size(); ++j) {
            //最初の順番でコンテナに入れていく
            ans[city[i][j].second] = make_pair(i+1, j+1);
        }
    }

    for (int i = 0; i < M; ++i) {
        cout << setw(6) << setfill('0') << ans[i].first;
        cout << setw(6) << setfill('0') << ans[i].second << endl;
    }
}