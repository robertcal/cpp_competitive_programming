#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int a, b; cin >> a >> b;

    int ans = 0;

    for (int i = a; i <= b; ++i) {
        string s = to_string(i);
        string rev = s;

        reverse(rev.begin(), rev.end());

        if (s == rev) {
            ++ans;
        }
    }

    cout << ans << endl;
}