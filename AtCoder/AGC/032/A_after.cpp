#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<int> b(N);
    for (int i = 0; i < N; ++i) {
        cin >> b[i];
    }

    int b_size;
    b_size = b.size();
    vector<int> ans;

    while (ans.size() < b_size) {
        int max_j = -1;
        for (int j = 0; j < b.size(); ++j) { //ここは逆にループを回せば、maxとかいらなくなるはず
            if (b[j] == j + 1) {
                max_j = j;
            }
        }

        if (max_j == -1) {
            cout << -1 << endl;
            return 0;
        }

        ans.push_back(b[max_j]);
        b.erase(b.begin() + max_j);
    }

    reverse(ans.begin(), ans.end());

    for (int k = 0; k < N; ++k) {
        cout << ans[k] << endl;
    }
}