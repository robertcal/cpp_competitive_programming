#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    map<char, double> ma;
    ma['A'] = 4.0;
    ma['B'] = 3.0;
    ma['C'] = 2.0;
    ma['D'] = 1.0;
    ma['F'] = 0.0;

    int n; cin >> n;
    string s; cin >> s;

    double ans = 0.0;

    for (int i = 0; i < n; ++i) {
        ans += ma[s[i]];
    }

    ans /= (double)n;

    cout << fixed << setprecision(15) << ans << endl;
}