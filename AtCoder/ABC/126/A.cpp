#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, K; cin >> N >> K;
    string S; cin >> S;

    string t_S;

    for (int i = 0; i < N; ++i) {
        if (i == K -1) {
            t_S += tolower(S[i]);
        } else {
            t_S += S[i];
        }
    }

    cout << t_S << endl;
}