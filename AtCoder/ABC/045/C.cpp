#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    string S; cin >> S;
    int N;
    N = S.length();

    int ans = 0;

    for (int bit = 0; bit < (1 << N-1); ++bit) { //2^(N-1)のbit全探索
        int sum = 0;

        for (int i = 0; i < N; ++i) {
            if (bit & (1 << i)) {

            }
        }

    }
}