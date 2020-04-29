#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int cnt[1000010] = {};

int main() {

    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        int a, b; cin >> a >> b;

        cnt[a]++;
        cnt[b+1]--;
    }

    for (int i = 0; i < 1000010 - 1; ++i) {
        cnt[i+1] += cnt[i];
    }

    int mx = 0;
    for (int i = 0; i < 1000010; ++i) {
        mx = max(mx, cnt[i]);
    }

    cout << mx << endl;
}