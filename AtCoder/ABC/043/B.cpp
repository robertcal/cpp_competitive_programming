#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    string ans = "";

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '0') {
            ans += '0';
        }

        if (s[i] == '1') {
            ans += '1';
        }

        if (s[i] == 'B') {
            if (ans != "") {
                ans.erase(ans.size()-1);
            }
        }
    }

    cout << ans << endl;
}