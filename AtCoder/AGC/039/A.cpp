#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s, t1, t2; cin >> s;
    ll k; cin >> k;

    ll sum1 = 0;
    t1 = s;

    for (int i = 0; i < s.size() - 1; ++i) {
        if (t1[i] == t1[i+1]) {
            ++sum1;
            t1[i+1] = 'A';
        }
    }

    ll d1 = 0;

    if (t1[0] == t1[s.size()-1]) {
        ++sum1;
        d1 = 1;
    }

    ll sum2 = 0;
    t2 = s;

    for (int i = 0; i < s.size() - 1; ++i) {
        if (t2[i] == t2[i+1]) {
            ++sum2;
            t2[i] = 'A';
        }
    }

    ll d2 = 0;

    if (t2[0] == t2[s.size()-1]) {
        ++sum2;
        d2 = 1;
    }

    cout << min(sum1 * k - d1, sum2 * k - d2) << endl;
}