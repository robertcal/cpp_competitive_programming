#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<int> A(N+1);
    for (int i = 0; i <= N; ++i) {
        cin >> A[i];
    }

    vector<int> B(N);
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    int ans_1 = 0; //型がintなので失敗していた

    for (int i = N; i > 0; --i) {
        if (A[i] + A[i-1] < B[i-1]) {
            ans_1 += A[i] + A[i-1];
            A[i-1] = 0;
        } else {
            ans_1 += B[i-1];
            if (A[i] < B[i-1]) {
                A[i-1] = A[i-1] - (B[i-1] - A[i]);
            }
        }
    }

    int ans_2 = 0;

    for (int i = 0; i <= N; ++i) {
        if (A[i] + A[i+1] < B[i]) {
            ans_2 += A[i] + A[i+1];
            A[i+1] = 0;
        } else {
            ans_2 += B[i];
            if (A[i] < B[i]) {
                A[i+1] = A[i+1] - (B[i] - A[i]);
            }
        }
    }

    cout << max(ans_1, ans_2)<< endl;
}