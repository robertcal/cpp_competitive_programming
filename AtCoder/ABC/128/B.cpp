#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<pair<string, int>> R(N);

    for (int i = 0; i < N; ++i) {
        string S; cin >> S;
        int P; cin >> P;

        R[i] = make_pair(S, 100 - P);
    }

    vector<size_t> indices(R.size());
    iota(indices.begin(), indices.end(), 0);

    sort(indices.begin(), indices.end(), [&R](size_t i1, size_t i2) {
        return R[i1] <= R[i2];
    });

    for (int v : indices) {
        cout << v + 1 << endl;
    }
}