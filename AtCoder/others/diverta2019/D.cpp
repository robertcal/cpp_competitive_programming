#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    long long N; cin >> N;

    vector<long long> S;

    S.push_back(N - 1);

    while (N % 2 == 0 && (N / 2) - 1 > 1) {
        S.push_back((N / 2) - 1);

        N = N / 2;
    }

    cout << accumulate(S.begin(), S.end(), 0LL)<< endl;
}
