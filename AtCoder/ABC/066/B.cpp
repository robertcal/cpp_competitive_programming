#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    int ans;

    for (int i = 1; i < s.size(); ++i) {
        string t = s;
        t.erase(i);

        if (t.size() % 2 != 0) {
            continue;
        }

        string a, b;
        a = t.substr(0, t.size()/2);
        b = t.substr(t.size()/2, t.size()/2);

        if (a == b) {
            ans = t.size();
        }
    }

    cout << ans << endl;
}