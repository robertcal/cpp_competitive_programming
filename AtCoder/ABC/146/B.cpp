#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    string s; cin >> s;

    for (int i = 0; i < s.length(); ++i) {
        char t = s[i] + n;

        if (t > 'Z') t = (char)(t - 26);

        cout << t;
    }

    cout << endl;
}