#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll N; cin >> N;

    ll cnt = 0;

    for (int i = 1; i <= N; ++i) {
        string s;
        s = to_string(i);

        if (s.length() % 2 == 1) {
            ++cnt;
        }
    }

    cout << cnt << endl;
}