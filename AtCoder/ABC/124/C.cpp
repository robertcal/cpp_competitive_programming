#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    ll sum1 = 0;

    //0101...
    for (ll i = 0; i < s.size(); ++i) {
        if (i % 2 == 0) {
            //偶数
            if (s[i] != '0') {
                ++sum1;
            }
        } else {
            //奇数
            if (s[i] != '1') {
                ++sum1;
            }
        }
    }

    ll sum2 = 0;

    //1010...
    for (ll i = 0; i < s.size(); ++i) {
        if (i % 2 == 0) {
            //偶数
            if (s[i] != '1') {
                ++sum2;
            }
        } else {
            //奇数
            if (s[i] != '0') {
                ++sum2;
            }
        }
    }

    cout << min(sum1, sum2) << endl;
}