#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    int ans = 0;

    for (int i = 0; i < s.size()-1; ++i) {
        if ((s[i] == 'W' && s[i+1] == 'B') || (s[i] == 'B' && s[i+1] == 'W')) {
            ++ans;
        }
    }

    cout << ans << endl;
}