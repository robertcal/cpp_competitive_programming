#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, Q; cin >> N >> Q;
    string S; cin >> S;

    vector<int> sum(N);

    sum[0] = 0;
    for (int i = 0; i < N; ++i) { //終わりをN-1にしておくと、最初のbreakは不要
        if (i == N - 1) {
            break;
        }

        if (S[i] == 'A' && S[i+1] == 'C') {
            sum[i+1] = sum[i] + 1;
        } else {
            sum[i+1] = sum[i];
        }
    }

    for (int j = 0; j < Q; ++j) {
        int l, r; cin >> l >> r;

        cout << sum[r-1] - sum[l-1] << endl;
    }
}