#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, K; cin >> N >> K;

    double ans = 0;

    for (int i = 1; i <= N; ++i) {
        //除算を整数同士で行うと、答えは整数になってしまう
        double temp = 1.0 / N;

        int point = i;

        while (point < K) {
            point *= 2;
            temp /= 2;
        }

        ans += temp;
    }

    cout << setprecision(10) << ans << endl; //桁数の指定
}