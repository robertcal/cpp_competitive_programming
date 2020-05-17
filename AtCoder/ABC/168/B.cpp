#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int k; cin >> k;
    string s; cin >> s;
    int len = s.length();

    if (len <= k) {
        cout << s << endl;
    } else {
        for (int i = 0; i < k; ++i) {
            cout << s[i];
        }
        cout << "...";
        cout << endl;
    }
}