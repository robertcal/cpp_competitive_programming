#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    int number_a_0 = 0;
    int number_a_minus = 0;
    int min_a_abs = INF;

    long long sum = 0;

    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        sum += abs(A[i]);

        if (A[i] == 0) {
            number_a_0 += 1;
        }

        if (A[i] < 0) {
            number_a_minus += 1;
        }

        min_a_abs = min(min_a_abs, abs(A[i]));
    }

    if (number_a_minus > 0) {
        if (number_a_0 > 0 || number_a_minus % 2 == 0) {
            cout << sum << endl;
        } else {
            cout << sum - (min_a_abs * 2) << endl;
        }
    } else {
        cout << sum << endl;
    }
}