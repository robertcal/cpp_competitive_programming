#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int ans = abs(A[N-1] - A[0]);

    cout << ans << endl;
}