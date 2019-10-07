#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, k; cin >> n >> k;

    map<int, int> mp;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        mp[a]++;
    }

    vector<int> v;

    for (auto x : mp) {
        v.push_back(x.second);
    }

    sort(v.begin(), v.end());

    int ans = 0;

    int t = mp.size();

    for (int i = 0; i < t-k; ++i) {
        ans += v[i];
    }

    cout << ans << endl;
}