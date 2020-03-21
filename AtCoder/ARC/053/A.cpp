#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int h, w; cin >> h >> w;

    int ans = 0;

    //横方向
    ans += (w - 1) * h;

    //縦方向
    ans += (h - 1) * w;

    cout << ans << endl;
}