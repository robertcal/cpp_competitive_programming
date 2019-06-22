#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<pair<int, int>> W(N);

    for (int i = 0; i < N; ++i) {
        int A, B;
        cin >> A >> B;

        W[i] = make_pair(B, A);
    }

    sort(W.begin(), W.end());

    int time = 0;

    for (int i = 0; i < N; ++i) {
        time += W[i].second;
        if (W[i].first < time ) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}