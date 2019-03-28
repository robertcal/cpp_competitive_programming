#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    string S; cin >> S;
    int N;
    N = S.length();

    long long ans = 0;

    for (int bit = 0; bit < (1 << N-1); ++bit) { //2^(N-1)のbit全探索
        long long sum = 0;

        long long tmp = S[0] - '0'; //文字列を整数に
        for (int i = 0; i < N-1; ++i) {
            if (bit & (1 << i)) { //+が挿入されたと考える
                sum += tmp;
                tmp = 0;
            }

            tmp = tmp * 10 + S[i+1] - '0';
        }

        sum += tmp; //最後の数が足されていないので足す
        ans += sum;
    }

    cout << ans << endl;
}