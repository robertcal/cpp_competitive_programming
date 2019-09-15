#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    bool ans = true;

    for (int i = 0; i < s.size(); ++i) {
        if (i % 2 == 0) {
            //偶数
            if (s[i] == 'L') {
                ans = false;
                break;
            }
        } else {
            //奇数
            if (s[i] == 'R') {
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