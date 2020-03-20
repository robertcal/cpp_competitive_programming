#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<string> w(n);
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }

    map<char, char> ma;
    ma['b'] = '1';
    ma['c'] = '1';

    ma['d'] = '2';
    ma['w'] = '2';

    ma['t'] = '3';
    ma['j'] = '3';

    ma['f'] = '4';
    ma['q'] = '4';

    ma['l'] = '5';
    ma['v'] = '5';

    ma['s'] = '6';
    ma['x'] = '6';

    ma['p'] = '7';
    ma['m'] = '7';

    ma['h'] = '8';
    ma['k'] = '8';

    ma['n'] = '9';
    ma['g'] = '9';

    ma['z'] = '0';
    ma['r'] = '0';

    vector<string> ans;

    for (int i = 0; i < n; ++i) {
        transform(w[i].begin(), w[i].end(), w[i].begin(), ::tolower); //::tolowerのように書く

        string s = "";

        for (int j = 0; j < w[i].length(); ++j) {
            if(ma.count(w[i][j]) == 0) continue;

            s += ma[w[i][j]];
        }

        if (s != "") ans.push_back(s);
    }

    int i = 0;
    for (auto t : ans) {
        if (i != 0) cout << " ";
        cout << t;
        ++i;
    }

    cout << endl;
}