#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;
    int t; cin >> t;

    int x = 0;
    int y = 0;

    int q = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'L') {
            --x;
        }

        if (s[i] == 'R') {
            ++x;
        }

        if (s[i] == 'U') {
            ++y;
        }

        if (s[i] == 'D') {
            --y;
        }

        if (s[i] == '?') {
            ++q;
        }
    }

    int ma = abs(x) + abs(y) + q;
    int mi;
    if (abs(x) + abs(y) >= q) {
        mi = abs(x) + abs(y) - q;
    } else {
        int n = q - (abs(x) + abs(y));
        if (n % 2 == 0) {
            mi = 0;
        } else {
            mi = 1;
        }
    }

    if (t == 1) {
        cout << ma << endl;
    } else {
        cout << mi << endl;
    }
}