#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    int sum_w = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] == 'W') {
            sum_w++;
        }
    }

    int sum_r = 0;
    for (int i = n / 2; i < n; ++i) {
        if (s[i] == 'R') {
            sum_r++;
        }
    }

    cout << min(sum_w, sum_r) << endl;
}