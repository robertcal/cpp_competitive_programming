#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    string t; t = s;
    reverse(t.begin(), t.end());

    int sum = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != t[i]) ++sum;
    }

    cout << sum / 2 << endl;
}