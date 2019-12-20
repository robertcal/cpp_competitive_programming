#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    ll t = n % 30;

    string s = "123456";

    for (ll i = 0; i < t; ++i) {
        swap(s[i % 5], s[i % 5 + 1]);
    }

    cout << s << endl;
}