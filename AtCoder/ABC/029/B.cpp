#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int ans = 0;

    for (int i = 0; i < 12; ++i) {
        string s; cin >> s;

        if (s.find('r') != string::npos) {
            ++ans;
        }
    }

    cout << ans << endl;
}