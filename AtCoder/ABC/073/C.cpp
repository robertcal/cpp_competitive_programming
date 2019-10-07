#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        mp[a]++;
    }

    int ans = 0;

    for (auto x : mp) {
        if (x.second % 2 != 0) {
            ++ans;
        }
    }

    cout << ans << endl;
}