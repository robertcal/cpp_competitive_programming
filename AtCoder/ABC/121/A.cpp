#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int H, W; cin >> H >> W;
    int h, w; cin >> h >> w;

    cout << H * W - h * W - H * w + h * w << endl;
}