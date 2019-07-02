#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<int> x(N), y(N), h(N);
    int si = -1;

    for (int i = 0; i < N; ++i) {
        cin >> x[i] >> y[i] >> h[i];

        if (h[i] > 0) {
            si = i;
        }
    }

    //答えは最初はあり得ない点にしておく
    int resx = -1, resy = -1, resh = -1;

    //座標について全探索
    for (int posx = 0; posx <= 100 ; ++posx) {
        for (int posy = 0; posy <= 100; ++posy) {
            //高さ > 0の点から求めた高さH
            int tmph = h[si] + abs(x[si] - posx) + abs(y[si] - posy);

            bool ok = true;

            //上で求めた高さHが他の全ての点で満たされているか調べる
            for (int i = 0; i < N; ++i) {
                //高さがある点の場合
                if (h[i] > 0 && tmph != h[i] + abs(x[i] - posx) + abs(y[i] - posy)) {
                    ok = false;
                }

                //高さが0の点の場合
                //H-|X-Cx|-|Y-Cy| < 0が正しい条件なので、その反対で正の場合は満たされていない
                if (h[i] == 0 && tmph > abs(x[i] - posx) + abs(y[i] - posy)) {
                    ok = false;
                }
            }

            if (ok) {
                resx = posx;
                resy = posy;
                resh = tmph;
            }
        }
    }

    cout << resx << " " << resy << " " << resh << endl;
}