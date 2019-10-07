#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    string ans;

    ans += s[0];

    int t = s.size() - 2;

    ans += to_string(t);

    int x = s.size() - 1;
    ans += s[x];

    cout << ans << endl;
}