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

    int idx = 1;
    bool one = false;

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            int k = j;
            while (k < w) {
                if (one && s[i][k] == '#') {
                    break;
                } else if (!one && s[i][k] == '#') {
                    cout << idx << " ";
                    one = true;
                } else {
                    cout << idx << " ";
                }

                ++k;
            }

            j = k - 1;
            one = false;
            ++idx;
        }
        cout << endl;
    }
}