#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    string S; cin >> S;

    int count = 0;
    int ans = 0;

    for (auto s:S) {
        if (s == 'A' || s == 'T' || s == 'G' || s == 'C') {
            ++count;
        } else {
            count = 0;
        }

        ans = max(ans, count);
    }

    cout << ans << endl;
}