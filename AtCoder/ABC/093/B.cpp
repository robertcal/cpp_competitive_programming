#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll A, B, K; cin >> A >> B >> K;

    if (A+K-1 >= B-K+1) {
        for (int i = A; i <= B; ++i) {
            cout << i << endl;
        }
        return 0;
    }

    for (int i = A; i < A+K; ++i) {
        cout << i << endl;
    }

    for (int i = B-K+1; i <= B; ++i) {
        cout << i << endl;
    }
}