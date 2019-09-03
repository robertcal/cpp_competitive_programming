#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b; cin >> a >> b;
    string s; cin >> s;

    bool ans = true;

    for (int i = 0; i < s.size(); ++i) {
        if (i == a) {
            if (s[i] != '-') {
                ans = false;
                break;
            }
        } else {
            int k = s[i] - '0';
            if (!(0 <= k && k <= 9)) { //isdigitを使うと簡単に判定できる
                ans = false;
                break;
            }
        }
    }

    if (ans) {
        puts("Yes");
    } else {
        puts("No");
    }
}