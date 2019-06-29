#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int calcNumOfCombination(int n, int r){
    int num = 1;
    for(int i = 1; i <= r; i++){
        num = num * (n - i + 1) / i;
    }
    return num;
}

int main() {

    int N, K; cin >> N >> K;

    for (int i = 1; i <= K; ++i) {
        if (i == 1) {
            cout << N - K + 1 << endl;
        } else {
            //K-1Ci-1選ぶ
            long long aida = 1;
            aida = calcNumOfCombination(K-1, i-1);
            aida = aida % 1000000007;

            long long nokori_red = N - K - (i-1);

            long long sonota = 1;

            if (nokori_red >= 1) {
                if (i-1+2 >= sonota) {
                    sonota = calcNumOfCombination(i-1+2, sonota);
                } else {
                    sonota = calcNumOfCombination(sonota, i-1+2);
                }

                sonota = sonota % 1000000007;
            }

            cout << aida * sonota << endl;
        }
    }
}