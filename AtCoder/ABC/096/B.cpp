#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll A, B, C; cin >> A >> B >> C;
    ll K; cin >> K;

    cout << A + B + C + max(A, max(B, C)) * pow(2, K) - max(A, max(B, C)) << endl;
}