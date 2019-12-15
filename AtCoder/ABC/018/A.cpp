#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    vector<int> t(3);
    vector<int> m(3);

    for (int i = 0; i < 3; ++i) {
        cin >> t[i];
        m[i] = t[i];
    }

    sort(t.rbegin(), t.rend());

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (m[i] == t[j]) {
                cout << j + 1 << endl;
            }
        }
    }
}