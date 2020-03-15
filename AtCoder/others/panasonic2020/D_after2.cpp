#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int n;

void dfs(string s, char mx) {
    if (s.length() == n) {
        cout << s << endl;
        return;
    }

    for (char c = 'a'; c <= mx+1; ++c) { //今まで使った文字+1までOK
        string t = s;
        t += c;
        dfs(t, max(mx, c)); //今まで使った文字+1ならそれがmaxで入る
    }
};

int main() {

    cin >> n;

    dfs("", 'a'-1);
}