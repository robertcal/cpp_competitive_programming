#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    int ans = 0;

    for (char c : s) {
        if (c == '1') {
            ++ans;
        }
    }
    
    cout << ans << endl;
}