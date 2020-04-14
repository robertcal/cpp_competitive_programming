#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, c; cin >> n >> c;
    map<int, int> ma_odd;
    map<int, int> ma_even;
    for (int i = 1; i <= 10; ++i) {
        ma_odd[i] = 0;
        ma_even[i] = 0;
    }

    for (int i = 1; i <= n; ++i) {
        int a; cin >> a;

        if (i % 2 == 0) {
            ma_even[a]++;
        } else {
            ma_odd[a]++;
        }
    }

    int max_o = 0;
    int second_o = 0;
    int max_o_i = 0;
    int second_o_i = 0;

    for (auto t : ma_odd) {
        max_o = max(max_o, t.second);
        if (max_o == t.second) {
            max_o_i = t.first;
        }
    }

    for (auto t : ma_odd) {
        if (t.first != max_o_i) {
            second_o = max(second_o, t.second);
        }

        if (second_o == t.second) {
            second_o_i = t.first;
        }
    }

    int max_e = 0;
    int second_e = 0;
    int max_e_i = 0;
    int second_e_i = 0;

    for (auto t : ma_even) {
        max_e = max(max_e, t.second);
        if (max_e == t.second) {
            max_e_i = t.first;
        }
    }

    for (auto t : ma_even) {
        if (t.first != max_e_i) {
            second_e = max(second_e, t.second);
        }

        if (second_e == t.second) {
            second_e_i = t.first;
        }
    }

    if (max_o_i != max_e_i) {
        cout << (n / 2 - max_e) * c + ((n + 1) / 2 - max_o) * c << endl;
    } else {
        int sum1 = (n / 2 - max_e) * c + ((n + 1) / 2 - second_o) * c;
        int sum2 = (n / 2 - second_e) * c + ((n + 1) / 2 - max_o) * c;

        cout << min(sum1, sum2) << endl;
    }
}