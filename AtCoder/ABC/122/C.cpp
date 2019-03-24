#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, Q; cin >> N >> Q;
    string S; cin >> S;

    vector<int> list;
    bool A = false;
    for (int k = 0; k < N; ++k) {
        if (S[k] == 'C' && A) {
            list.push_back(k);
        }

        if (S[k] == 'A') {
            A = true;
        } else {
            A = false;
        }
    }

    for (int i = 0; i < Q; ++i) {
        int l;
        int r;
        cin >> l >> r;

        int ans = 0;

        for (auto s:list) {
            if (l <= s && s < r) {
                ++ans;
            }
        }


        cout << ans << endl;
    }
}