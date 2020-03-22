#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int h, w, k; cin >> h >> w >> k;

    vector<string> s(h);
    for (int i = 0; i < h; ++i) {
        cin >> s[i];
    }

    vector<int> h_w;

    for (int i = 0; i < h; ++i) {
        int cnt = 0;

        for (int j = 0; j < w; ++j) {
            if (s[i][j] == '1') ++cnt;
        }

        h_w.push_back(cnt);
    }

    vector<int> w_w;

    for (int i = 0; i < w; ++i) {
        int cnt = 0;

        for (int j = 0; j < h; ++j) {
            if (s[j][i] == '1') ++cnt;
        }

        w_w.push_back(cnt);
    }


}