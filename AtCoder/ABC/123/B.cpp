#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    vector<int> t(5);
    for (int i = 0; i < 5; ++i) {
        cin >> t[i];
    }

    int ans = 0;

    int min_amari = INF;
    int min_j = INF;

    for (int j = 0; j < 5; ++j) {
        if (t[j] % 10 > 0) {
            if (min_amari > t[j] % 10) {
                min_amari = t[j] % 10;
                min_j = j;
            }
        }
    }

    for (int k = 0; k < 5; ++k) {
        if (k == min_j) {
            ans += t[k];
        } else {
            if (t[k] % 10 == 0) {
                ans += t[k];
            } else {
                ans += ((t[k] / 10) + 1) * 10;
            }
        }
    }

    cout << ans << endl;
}