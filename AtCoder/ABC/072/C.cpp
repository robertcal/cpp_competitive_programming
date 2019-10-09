#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        mp[a]++;
    }

    int ans = 0;

    for (int i = 1; i < 100000 - 1; ++i) {
        ans = max(ans, mp[i-1] + mp[i] + mp[i+1]);
    }

    cout << ans << endl;
}