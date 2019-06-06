#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, K; cin >> N >> K;

    vector<int> V(N);
    for (int i = 0; i < N; ++i) {
        cin >> V[i];
    }

    int ans = 0;

    //全探索
    for (int i = 0; i <= K; ++i) {
        for (int j = 0; j <= K-i; ++j) {
            if (i + j > N) {
                continue;
            }

            int d = K - i - j; //捨てる宝石
            int value = 0; //この条件での宝石の価値
            vector<int> S; //持っている宝石

            //左の宝石を入れる
            for (int k = 0; k < i; ++k) {
                value += V[k];
                S.push_back(V[k]);
            }
            
            //右の宝石を入れる
            for (int l = N-j; l < N; ++l) {
                value += V[l];
                S.push_back(V[l]);
            }

            //宝石を価値順にソート
            sort(S.begin(), S.end());

            for (int m = 0; m < d; ++m) {
                //持っている宝石より捨てる宝石の方が多い場合
                if (m >= S.size()) {
                    continue;
                }

                //捨てる宝石の価値が正の場合
                if (S[m] > 0) {
                    continue;
                }

                value -= S[m];
            }

            ans = max(ans, value);
        }
    }

    cout << ans << endl;
}