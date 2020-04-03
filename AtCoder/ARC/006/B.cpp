#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, l; cin >> n >> l;
    cin.ignore(); //改行文字を除く

    vector<string> s(l);
    for (int i = 0; i < l; ++i) {
        getline(cin, s[i]);
    }

    int pos;

    string t;
    getline(cin, t);
    for (int i = 0; i < t.length(); ++i) {
        if (t[i] == 'o') {
            pos = i;
            break;
        }
    }

    int d = l - 1;

    while (d >= 0) {
        if (pos - 1 >= 0 && s[d][pos-1] == '-') {
            pos -= 2;
        } else if (pos + 1 < 2 * n - 1 && s[d][pos+1] == '-') {
            pos += 2;
        }

        --d;
    }

    cout << pos / 2 + 1 << endl;
}