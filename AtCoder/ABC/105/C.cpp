#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll N; cin >> N;

    if (N == 0) {
        cout << '0' << endl;
        return 0;
    }

    string S;

    while (N != 0) {
        ll a;
        a = N % (-2);
        if (a < 0) {
            a += 2;
        }

        S += a + '0';

        N = (N - a) / (-2);
    }

    reverse(S.begin(), S.end());

    cout << S << endl;
}